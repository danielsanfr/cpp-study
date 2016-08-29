#include "lqueue.h"

Cell::Cell(int item)
{
    element = item;
    next = 0;
}

LQueue::LQueue()
{
    sizeQueue = 0;
    front = 0;
    rear = 0;
}

void LQueue::clear()
{
    int i;
    Cell * current;
    Cell * aux;
    for(i = 0 ; i < sizeQueue ; ++i)
    {
        current = front;
        while(current->next != 0)
        {
            if(current->next->next == 0)
                aux = current;
            current = current->next;
        }
        aux->next = 0;
        delete current;
    }
    sizeQueue = 0;
    front = 0;
    rear = 0;
}

void LQueue::enqueue(int it)
{
    ++sizeQueue;
    Cell * newCell = new Cell(it);
    if(sizeQueue == 1)
    {
        front = newCell;
        rear = front;
    }
    else
    {
        rear->next = newCell;
        rear = rear->next;
    }
}

int LQueue::dequeue()
{
    int value;
    if(sizeQueue == 0)
        return 0;
    else
    {
        --sizeQueue;
        Cell * aux = front;
        value = front->element;
        front = front->next;
        delete aux;
        return value;
    }
}

int LQueue::frontValue()
{
    if(front == 0)
        return 0;
    return front->element;
}

int LQueue::length()
{
    return sizeQueue;
}
