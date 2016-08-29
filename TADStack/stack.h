#ifndef _stack_h
#define _stack_h
// Stack abtract class
class Stack
{
    public:
        Stack() {}
        virtual ~Stack() {}
        // Protect copy constructor
        // Default constructor
        // Base destructor
        // Reinitialize the stack.  The user is responsible for
        // reclaiming the storage used by the stack elements.
        virtual void clear() = 0;
        // Push an element onto the top of the stack.
        // it: The element being pushed onto the stack.
        virtual void push(int it) = 0;
        // Remove the element at the top of the stack.
        // Return: The element at the top of the stack.
        virtual int pop() = 0;
        // Return: A copy of the top element.
        virtual int topValue() = 0;
        // Return: The number of elements in the stack.
        virtual int length() = 0;
};

#endif
