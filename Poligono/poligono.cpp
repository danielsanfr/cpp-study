#include "poligono.h"

void Poligono::setValue(int b, int a)
{
    base = b;
    altura = a;
};

void Poligono::show()
{
    cout << "Base: " << base << endl << "Altura: " << altura << endl;
};

Poligono::Poligono()
{
    //ctor
}

Poligono::~Poligono()
{
    //dtor
}
