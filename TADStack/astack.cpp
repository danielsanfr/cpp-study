#include "astack.h"

AStack::AStack()
{
    sizeStack = 0;
}

void AStack::clear()
{
    if(sizeStack != 0)
    {
        free(pilha);
        pilha = 0;
        sizeStack = 0;
    }
}

void AStack::push(int it)
{
    ++sizeStack;
    if(sizeStack == 1)
        pilha = (int*) malloc(sizeof(int));
    else
        pilha = (int*) realloc(pilha, sizeof(int)*sizeStack);
    pilha[sizeStack - 1] = it;
}

int AStack::pop()
{
    int element;
    if(sizeStack == 0)
        return 0;
    element = pilha[sizeStack - 1];
    --sizeStack;
    pilha = (int*) realloc(pilha, sizeof(int)*sizeStack);
    return element;
}

int AStack::topValue()
{
    if(sizeStack == 0)
        return 0;
    return pilha[sizeStack - 1];
}
int AStack::length()
{
    return sizeStack;
}
