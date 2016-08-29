#include "myavltree.h"

MyAvlTree::MyAvlTree()
{
    quantidade = 0;
    quantidadeAux = 0;
    lista = 0;
    tamLista = 0;
    root = 0;
    alturaAux = 0;
    alt = 0;
    full = true;
    complete = true;
    auxFull = true;
    auxComplete = true;
}

MyAvlTree::~MyAvlTree()
{
    delete root;
    delete [] lista;
}

void MyAvlTree::clear()
{
    /*Node * current;
    Node * aux;
    if(root != 0)
    {
        while(!root->isLeaf())
        {
            current = root;
            while(!current->isLeaf())
            {
                if(current->subTree[0] != 0)
                {
                    if(current->subTree[0]->isLeaf())
                    {
                        aux = current;
                        current = current->subTree[0];
                        delete current;
                        aux->subTree[0] = 0;
                        current = aux;
                    }
                    else
                        current = current->subTree[0];
                }
                else if(current->subTree[1] != 0)
                {
                    if(current->subTree[1]->isLeaf())
                    {
                        aux = current;
                        current = current->subTree[1];
                        delete current;
                        aux->subTree[1] = 0;
                        current = aux;
                    }
                    else
                        current = current->subTree[1];
                }
            }
        }
    }*/
    delete root;
    quantidade = 0;
    quantidadeAux = 0;
    lista = 0;
    tamLista = 0;
    root = 0;
    alturaAux = 0;
    alt = 0;
    full = true;
    complete = true;
    auxFull = true;
    auxComplete = true;
}

void MyAvlTree::insert(int item)
{
    bool aux = true;
    bool flag = false;
    Node * newNode = new Node(item);
    auxFull = true;
    auxComplete = true;
    ++quantidade;
    if(root ==  0)
    {
        root = newNode;
        alt = 1;
    }
    else
    {
        Node * current = root;
        while(!current->isLeaf() || aux)
        {
            if(newNode->element == current->element)
            {
                current->linhas.append(1);
                aux = false;
                flag = true;
                current = new Node(INT_MIN);
            }
            else if(newNode->element < current->element)
            {
                if(current->subTree[0] == 0)
                {
                    current->subTree[0] = newNode;
                    current = newNode;
                    aux = false;
                }
                else
                    current = current->subTree[0];
            }
            else
            {
                if(current->subTree[1] == 0)
                {
                    current->subTree[1] = newNode;
                    current = newNode;
                    aux = false;
                }
                else
                    current = current->subTree[1];
            }
        }
        if(flag)
            delete current;
    }
    this->aux = 0;
    balance(root);
}

int MyAvlTree::height()
{
    altMax = INT_MIN;
    if(quantidade != quantidadeAux)
    {
        quantidadeAux = quantidade;
        auxHeight(root);
        alt = altMax;
    }
    return alt;
}

void MyAvlTree::auxHeight(Node * current)
{
    ++alturaAux;
    if(current->subTree[0] != 0)
        auxHeight(current->subTree[0]);
    if(current->subTree[1] != 0)
        auxHeight(current->subTree[1]);
    if(current->isLeaf())
        if(altMax < alturaAux)
            altMax = alturaAux;
    --alturaAux;
}

int MyAvlTree::pathForNode(int item)
{
    int tamCam = 0;
    bool flag = true;
    Node * current = root;
    if(root == 0)
        flag = false;
    else
    {
        while(current->element != item && flag)
        {
            if(item < current->element)
            {
                if(current->subTree[0] == 0)
                    flag = false;
                else
                    current = current->subTree[0];
            }
            else
            {
                if(current->subTree[1] == 0)
                    flag = false;
                else
                    current = current->subTree[1];
            }
            ++tamCam;
        }
    }
    if(flag)
        return tamCam;
    else
        return -1;
}

bool MyAvlTree::isFull()
{
    if(auxFull)
    {
        if(root == 0)
            return full;
        auxIsFull(root);
        auxFull = false;
    }
    return full;
}

void MyAvlTree::auxIsFull(Node * current)
{
    if(current->subTree[0] != 0)
        auxIsFull(current->subTree[0]);
    if(current->subTree[1] != 0)
        auxIsFull(current->subTree[1]);
    if(!(current->isLeaf() || current->isFullNode()))
        full = false;
}

bool MyAvlTree::isComplete()
{
    if(auxComplete)
    {
        if(root == 0)
            return complete;
        auxComplete = false;
        int i, aux = -1;
        bool flag = false;
        tamLista = 0;
        lista = new int[quantidade];
        pos = 1;
        aux = 1;
        auxIsComplete(root);
        for(i = 0; i < tamLista; ++i)
        {
            if(lista[i] == INT_MAX || lista[i] == 0)
            {
                flag = true;
                aux = i;
            }
            if(aux != i && flag && lista[i] != INT_MAX)
                complete = false;
        }
        delete [] lista;
        lista = 0;
        tamLista = 0;
        return complete;
    }
    else
        return complete;
}

void MyAvlTree::auxIsComplete(Node * current)
{
    if(current->element == 0)
        listar(INT_MIN);
    else
        listar(current->element);
    pos *= 2;
    if(!current->isLeaf())
    {
        if(current->subTree[0] != 0)
            auxIsComplete(current->subTree[0]);
        else
            listar(INT_MAX);
        ++pos;
        if(current->subTree[1] != 0)
            auxIsComplete(current->subTree[1]);
        else
            listar(INT_MAX);
    }
    else
        ++pos;
    pos = (pos - 1)/2;
}

void MyAvlTree::listar(int item)
{
    if(pos > quantidade)
        lista = (int*) realloc(lista, sizeof(int)*pos);
    if(pos > tamLista)
        tamLista = pos;
    lista[pos - 1] = item;
}

int MyAvlTree::getFactor(Node * current)
{
    int altLeft, altHight;
    if(current->subTree[0] != 0)
    {
        altMax = INT_MIN;
        auxHeight(current->subTree[0]);
        altLeft = altMax;
    }
    else
        altLeft = 0;
    if(current->subTree[1] != 0)
    {
        altMax = INT_MIN;
        auxHeight(current->subTree[1]);
        altHight = altMax;
    }
    else
        altHight = 0;
    return altLeft - altHight;
}

void MyAvlTree::balance(Node * current)
{
    ++this->aux;
    if(!current->isLeaf())
    {
        if(current->subTree[0] != 0 && !current->subTree[0]->isLeaf())
        {
            balance(current->subTree[0]);
            int i = getFactor(current->subTree[0]);
            int lado = 0;
            if(i < -1)
                //rotateLeft(current, current->subTree[0], lado);
                rotate(current, current->subTree[0], lado, 0);
            else if(i > 1)
                //rotateRight(current, current->subTree[0], lado);
                rotate(current, current->subTree[0], lado, 1);
        }
        if(current->subTree[1] != 0 && !current->subTree[1]->isLeaf())
        {
            balance(current->subTree[1]);
            int i = getFactor(current->subTree[1]);
            int lado = 1;
            if(i < -1)
                //rotateLeft(current, current->subTree[1], lado);
                rotate(current, current->subTree[1], lado, 0);
            else if(i > 1)
                //rotateRight(current, current->subTree[1], lado);
                rotate(current, current->subTree[1], lado, 1);
        }
    }
    --this->aux;
    if(this->aux == 0)
        balanceRoot();
}

void MyAvlTree::balanceRoot()
{
    int i = getFactor(root);
    if(i < -1)
    {
        if(getFactor(root->subTree[1]) <= 0)
        {
            Node * child = root;
            root = root->subTree[1];
            child->subTree[1] = root->subTree[0];
            root->subTree[0] = child;
        }
        else
        {
            Node * child = root;
            Node * childAux = root->subTree[1];
            root = childAux->subTree[0];
            child->subTree[1] = root->subTree[0];
            childAux->subTree[0] = root->subTree[1];
            root->subTree[1] = childAux;
            root->subTree[0] = child;
        }
    }
    else if(i > 1)
    {
        if(getFactor(root->subTree[0]) >= 0)
        {
            Node * child = root;
            root = root->subTree[0];
            child->subTree[0] = root->subTree[1];
            root->subTree[1] = child;
        }
        else
        {
            Node * child = root;
            Node * childAux = root->subTree[0];
            root = childAux->subTree[1];
            child->subTree[0] = root->subTree[1];
            childAux->subTree[1] = root->subTree[0];
            root->subTree[1] = child;
            root->subTree[0] = childAux;
        }
    }
}

void MyAvlTree::rotateLeft(Node * node, Node * child, int lado)
{
    if(lado == 2)
    {
        if(getFactor(child->subTree[1]) <= 0)
        {
            node->subTree[1] = child->subTree[1];
            child->subTree[1] = node->subTree[1]->subTree[0];
            node->subTree[1]->subTree[0] = child;
        }
        else
        {
            Node * aux = child->subTree[1];
            node->subTree[1] = aux->subTree[0];
            child->subTree[1] = node->subTree[1]->subTree[0];
            aux->subTree[0] = node->subTree[1]->subTree[1];
            node->subTree[1]->subTree[0] = child;
            node->subTree[1]->subTree[1] = aux;
        }
    }
    else
    {
        if(getFactor(child->subTree[1]) <= 0)
        {
            node->subTree[0] = child->subTree[1];
            child->subTree[1] = node->subTree[0]->subTree[0];
            node->subTree[0]->subTree[0] = child;
        }
        else
        {
            Node * aux = child->subTree[1];
            node->subTree[0] = aux->subTree[0];
            child->subTree[1] = node->subTree[0]->subTree[0];
            aux->subTree[0] = node->subTree[0]->subTree[1];
            node->subTree[0]->subTree[0] = child;
            node->subTree[0]->subTree[1] = aux;
        }
    }
}

void MyAvlTree::rotateRight(Node * node, Node * child, int lado)
{
    if(lado == 2)
    {
        if(getFactor(child->subTree[0]) >= 0)
        {
            node->subTree[1] = child->subTree[0];
            child->subTree[0] = node->subTree[1]->subTree[1];
            node->subTree[1]->subTree[1] = child;
        }
        else
        {
            Node * aux = child->subTree[0];
            node->subTree[1] = aux->subTree[1];
            child->subTree[0] = node->subTree[1]->subTree[1];
            aux->subTree[1] = node->subTree[1]->subTree[0];
            node->subTree[1]->subTree[0] = aux;
            node->subTree[1]->subTree[1] = child;
        }
    }
    else
    {
        if(getFactor(child->subTree[0]) >= 0)
        {
            node->subTree[0] = child->subTree[0];
            child->subTree[0] = node->subTree[0]->subTree[1];
            node->subTree[0]->subTree[1] = child;
        }
        else
        {
            Node * aux = child->subTree[0];
            node->subTree[0] = aux->subTree[1];
            child->subTree[0] = node->subTree[0]->subTree[1];
            aux->subTree[1] = node->subTree[0]->subTree[0];
            node->subTree[0]->subTree[0] = aux;
            node->subTree[0]->subTree[1] = child;
        }
    }
}

void MyAvlTree::rotate(Node * node, Node * child, int lado, int direcao)
{
    (direcao == 0) int direcaoOposta = 1 : int direcaoOposta = 0;
    if(getFactor(child->subTree[direcaoOposta]) >= 0)
    {
        node->subTree[lado] = child->subTree[direcaoOposta];
        child->subTree[direcaoOposta] = node->subTree[lado]->subTree[direcao];
        node->subTree[lado]->subTree[direcao] = child;
    }
    else
    {
        Node * aux = child->subTree[direcao];
        node->subTree[lado] = aux->subTree[direcaoOposta];
        child->subTree[direcao] = node->subTree[lado]->subTree[1];
        aux->subTree[1] = node->subTree[lado]->subTree[0];
        node->subTree[lado]->subTree[0] = aux;
        node->subTree[lado]->subTree[1] = child;
    }
}

















