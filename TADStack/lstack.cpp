#include "lstack.h"

Cell::Cell(int item)
{
    element = item;
    next = 0;
}

LStack::LStack()
{
    sizeStack = 0;
    head = 0;
}

void LStack::clear()
{
    int i;
    Cell * current;
    Cell * aux;
    for(i = 0 ; i < sizeStack ; ++i)
    {
        current = head;
        while(current->next != 0)
        {
            if(current->next->next == 0)
                aux = current;
            current = current->next;
        }
        aux->next = 0;
        delete current;
    }
    sizeStack = 0;
}

void LStack::push(int it)
{
    ++sizeStack;
    Cell * newCell = new Cell(it);
    if(head == 0)
        head = newCell;
    else
    {
        Cell * aux = head;
        head = newCell;
        head->next = aux;
    }
}

int LStack::pop()
{
    int value;
    if(sizeStack == 0)
        return 0;
    else
    {
        --sizeStack;
        Cell * aux = head;
        value = head->element;
        head = head->next;
        delete aux;
        return value;
    }
}

int LStack::topValue()
{
    if(head == 0)
        return 0;
    return head->element;
}
int LStack::length()
{
    return sizeStack;
}
