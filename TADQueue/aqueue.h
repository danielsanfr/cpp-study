#ifndef AQUEUE_H
#define AQUEUE_H

#include "queue.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class AQueue : public Queue
{
    public:
        AQueue();
        void clear();
        void enqueue(int it);
        int dequeue();
        int frontValue();
        int length();
    protected:
    private:
        int sizeQueue;
        int front;
        int rear;
        int * fila;
};

#endif // AQUEUE_H
