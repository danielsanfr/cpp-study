#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>

using namespace std;

class Poligono
{
    public:
        void setValue(int, int);
        void show();
        Poligono();
        virtual ~Poligono();
    protected:
        int base, altura;
    private:
};

#endif // POLIGONO_H
