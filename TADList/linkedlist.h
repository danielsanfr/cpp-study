#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "list.h"
#include <iostream>

using namespace std;

class Cell
{
    public:
        int element;
        Cell * next;
        Cell(int value);
};

class LinkedList : public List
{
    public:
        LinkedList();
        //~List() {} // Base destructor
        void clear();
        void insert(int item);
        void append(int item);
        int remove();
        void moveToStart();
        void moveToEnd();
        void prev();
        void next();
        int length();
        int currPos();
        void moveToPos(int pos);
        int getValue();
    protected:
    private:
        Cell * head;
        int sizeList;
        int curr;
};

#endif // LINKEDLIST_H
