#ifndef LLIST_H
#define LLIST_H

#include "cell.h"
#include <iostream>
using namespace std;

class LList
{
public:
    Cell * head;
    LList();
    void append(int value);
    void show();
};

#endif // LLIST_H
