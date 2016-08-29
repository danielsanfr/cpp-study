#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    public:
        Queue() {}
		virtual ~Queue() {} // Base destructor
        // Reinitialize the queue. The user is responsible for
        // reclaiming the storage used by the queue elements.
        virtual void clear() = 0;
        // Place an element at the rear of the queue.
        // it: The element being enqueued.
        virtual void enqueue(int it) = 0;
        // Remove and return element at the front of the queue.
        // Return: The element at the front of the queue.
        virtual int dequeue() = 0;
        // Return: A copy of the front element.
        virtual int frontValue() = 0;
        // Return: The number of elements in the queue.
        virtual int length() = 0;
};

#endif // QUEUE_H
