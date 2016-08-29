#ifndef ASTACK_H
#define ASTACK_H

#include "stack.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class AStack : public Stack
{
    public:
        AStack();
        void clear();
        void push(int it);
        int pop();
        int topValue();
        int length();
    protected:
    private:
        int *pilha;
        int sizeStack;
};

#endif // ASTACK_H
