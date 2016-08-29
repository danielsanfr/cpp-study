#ifndef QUADRADO_H
#define QUADRADO_H

#include "poligono.h"

class Quadrado : public Poligono
{
    public:
        int area();
        void show();
        Quadrado();
        virtual ~Quadrado();
    protected:
    private:
};

#endif // QUADRADO_H
