#ifndef LSTACK_H
#define LSTACK_H

#include "stack.h"
#include <iostream>

using namespace std;

class Cell
{
    public:
        int element;
        Cell * next;
        Cell(int value);
};

class LStack : public Stack
{
    public:
        LStack();
        void clear();
        void push(int it);
        int pop();
        int topValue();
        int length();
    protected:
    private:
        int sizeStack;
        Cell * head;
};

#endif // LSTACK_H
