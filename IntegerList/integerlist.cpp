#include "integerlist.h"

IntegerList::IntegerList()
{
    count = 0;
};

int IntegerList::insertAt(int element, int index)
{
    if(index < count)
        lista.insert(lista.begin() + index, element);
    else
        lista.push_back(element);
    count = lista.size();
    return 0;
};

bool IntegerList::isEmpty()
{
    return lista.empty();
};

void IntegerList::reintialize()
{
    lista.clear();
    count = 0;
};

int IntegerList::size()
{
    return lista.size();
};

void IntegerList::removeAt(int index)
{
    if(index < count)
        lista.erase(lista.begin() + index);
    else
        lista.pop_back();
    count = lista.size();
};

int IntegerList::at(int index)
{
    return lista[index];
};
