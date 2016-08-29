#include "aqueue.h"

AQueue::AQueue()
{
    sizeQueue = 0;
    front = 0;
    rear = 0;
    fila = 0;
}

void AQueue::clear()
{
    if(sizeQueue != 0)
    {
        free(fila);
        fila = 0;
        sizeQueue = 0;
        front = 0;
        rear = 0;
    }
}

void AQueue::enqueue(int it)
{
    if(sizeQueue == 0)
    {
        fila = (int*) malloc(sizeof(int));
        ++sizeQueue;
        fila[rear] = it;
    }
    else if(((rear - front + 1) == sizeQueue) && (front != 0))
    {
        ++sizeQueue;
        int i;
        int * filaAux = (int*) malloc(sizeof(int)*sizeQueue);
        int * aux;
        for(i = 0; i < (rear % sizeQueue); ++i)
        {
            if((i + front) < sizeQueue - 1)
                filaAux[i] = fila[front + i];
            else
                filaAux[i] = fila[(front + i) % (sizeQueue - 1)];
        }
        front = 0;
        rear = (rear % sizeQueue);
        filaAux[rear] = it;
        aux = fila;
        fila = filaAux;
        delete aux;
    }
    else if((front > 0) && ((rear - front + 1) <= sizeQueue))
    {
        ++rear;
        fila[rear % sizeQueue] = it;
    }
    else
    {
        ++sizeQueue;
        ++rear;
        fila = (int*) realloc(fila, sizeof(int)*sizeQueue);
        fila[rear] = it;
    }
}

int AQueue::dequeue()
{
    int element;
    if(sizeQueue == 0)
        return 0;
    else
    {
        if(front < sizeQueue)
            element = fila[front];
        else
            element = fila[front % sizeQueue];
        ++front;
        return element;
    }
}

int AQueue::frontValue()
{
    if(sizeQueue == 0)
        return 0;
    return fila[front];
}

int AQueue::length()
{
    return (rear - front + 1);
}
