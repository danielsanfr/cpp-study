#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node
{
    public:
        int element;
        Node * right;
        Node * left;
        Node(int item);
        ~Node() {} // Base destructor
        // Return the node’s value
        //int getValue();
        // Set the node’s value
        //void setElement(int it);
        // Return the node’s left child
        //Node * getNodeLeft();
        // Set the node’s left child
        //void setLeft(Node * node);
        // Return the node’s right child
        //Node * getNodeRight();
        // Set the node’s right child
        //void setRight(Node * node);
        // Return true if the node is a leaf, false otherwise
        bool isLeaf();
        bool isFullNode();
};

#endif // NODE_H
