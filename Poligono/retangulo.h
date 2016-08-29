#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"


class Retangulo : public Poligono
{
    public:
        int area();
        void show();
        Retangulo();
        virtual ~Retangulo();
    protected:
    private:
};

#endif // RETANGULO_H
