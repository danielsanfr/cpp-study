#ifndef INTEGERLIST_H
#define INTEGERLIST_H

#include <iostream>
#include <vector>

using namespace std;

class IntegerList
{
        vector<int> lista;
    public:
        int count;
        IntegerList();
        int insertAt(int element, int index);
        bool isEmpty();
        void reintialize();
        int size();
        void removeAt(int index);
        int at(int index);
    protected:
};

#endif // INTEGERLIST_H
