#ifndef LQUEUE_H
#define LQUEUE_H

#include "queue.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class Cell
{
    public:
        int element;
        Cell * next;
        Cell(int value);
};

class LQueue : public Queue
{
    public:
        LQueue();
        void clear();
        void enqueue(int it);
        int dequeue();
        int frontValue();
        int length();
    protected:
    private:
        int sizeQueue;
        Cell * front;
        Cell * rear;
};

#endif // LQUEUE_H
