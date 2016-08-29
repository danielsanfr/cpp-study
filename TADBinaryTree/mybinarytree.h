#ifndef MYBINARYTREE_H
#define MYBINARYTREE_H

#include "binarytree.h"
#include "node.h"
#include <iostream>
#include <climits>
#include <stdlib.h>

using namespace std;

class MyBinaryTree : public BinaryTree
{
    public:
        MyBinaryTree();
        void clear();
		void insert(int item);
		int height();
		int pathForNode(int item);
		bool isFull();
		bool isComplete();
    protected:
    private:
        Node * root;
        int quantidade;
        int quantidadeAux;
        int alturaAux;
        int tamLista;
        int alt;
        int altMax;
        int pos;
        int aux;
        bool full;
        bool auxFull;
        bool complete;
        bool auxComplete;
        int * lista;
        void auxHeight(Node * current);
        void listar(int item);
        void auxIsFull(Node * current);
        void auxIsComplete(Node * current);
};

#endif // MYBINARYTREE_H
