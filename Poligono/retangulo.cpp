#include "retangulo.h"

int Retangulo::area()
{
    return base*altura;
};

void Retangulo::show()
{
    int i, j;
    for(j = 0 ; j < altura ; ++j)
    {
        if(j == 0 || j == altura - 1)
        {
            for(i = 0 ; i < base ; ++i)
            {
                if(i == 0 || i == base - 1) cout << "+ ";
                else cout << "- ";
            }
        }
        else
        {
            for(i = 0 ; i < base ; ++i)
            {
                if(i == 0 || i == base - 1) cout << "| ";
                else cout << "  ";
            }
        }
        cout << endl;
    }
};

Retangulo::Retangulo()
{
    //ctor
}

Retangulo::~Retangulo()
{
    //dtor
}
