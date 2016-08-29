#include "node.h"

Node::Node(int item)
{
    element = item;
    subTree[1] = 0;
    subTree[0] = 0;
}

Node::~Node()
{
    delete subTree[0];
    delete subTree[1];
}

bool Node::isLeaf()
{
    if(subTree[1] == 0 && subTree[0] == 0)
        return true;
    return false;
}

bool Node::isFullNode()
{
    if(subTree[1] != 0 && subTree[0] != 0)
        return true;
    return false;
}
