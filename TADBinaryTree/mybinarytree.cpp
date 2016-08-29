#include "mybinarytree.h"

MyBinaryTree::MyBinaryTree()
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

void MyBinaryTree::clear()
{
    Node * current;
    Node * aux;
    if(root != 0)
    {
        while(!root->isLeaf())
        {
            current = root;
            while(!current->isLeaf())
            {
                if(current->left != 0)
                {
                    if(current->left->isLeaf())
                    {
                        aux = current;
                        current = current->left;
                        delete current;
                        aux->left = 0;
                        current = aux;
                    }
                    else
                        current = current->left;
                }
                else if(current->right != 0)
                {
                    if(current->right->isLeaf())
                    {
                        aux = current;
                        current = current->right;
                        delete current;
                        aux->right = 0;
                        current = aux;
                    }
                    else
                        current = current->right;
                }
            }
        }
    }
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

void MyBinaryTree::insert(int item)
{
    bool aux = true;
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
            if(newNode->element < current->element)
            {
                if(current->left == 0)
                {
                    current->left = newNode;
                    current = newNode;
                    aux = false;
                }
                else
                    current = current->left;
            }
            else
            {
                if(current->right == 0)
                {
                    current->right = newNode;
                    current = newNode;
                    aux = false;
                }
                else
                    current = current->right;
            }
        }
    }
}

int MyBinaryTree::height()
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

void MyBinaryTree::auxHeight(Node * current)
{
    ++alturaAux;
    if(current->left != 0)
        auxHeight(current->left);
    if(current->right != 0)
        auxHeight(current->right);
    if(current->isLeaf())
        if(altMax < alturaAux)
            altMax = alturaAux;
    --alturaAux;
}

int MyBinaryTree::pathForNode(int item)
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
                if(current->left == 0)
                    flag = false;
                else
                    current = current->left;
            }
            else
            {
                if(current->right == 0)
                    flag = false;
                else
                    current = current->right;
            }
            ++tamCam;
        }
    }
    if(flag)
        return tamCam;
    else
        return -1;
}

bool MyBinaryTree::isFull()
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

void MyBinaryTree::auxIsFull(Node * current)
{
    if(current->left != 0)
        auxIsFull(current->left);
    if(current->right != 0)
        auxIsFull(current->right);
    if(!(current->isLeaf() || current->isFullNode()))
        full = false;
}

bool MyBinaryTree::isComplete()
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

void MyBinaryTree::auxIsComplete(Node * current)
{
    if(current->element == 0)
        listar(INT_MIN);
    else
        listar(current->element);
    pos *= 2;
    if(!current->isLeaf())
    {
        if(current->left != 0)
            auxIsComplete(current->left);
        else
            listar(INT_MAX);
        ++pos;
        if(current->right != 0)
            auxIsComplete(current->right);
        else
            listar(INT_MAX);
    }
    else
        ++pos;
    pos = (pos - 1)/2;
}

void MyBinaryTree::listar(int item)
{
    if(pos > quantidade)
        lista = (int*) realloc(lista, sizeof(int)*pos);
    if(pos > tamLista)
        tamLista = pos;
    lista[pos - 1] = item;
}
