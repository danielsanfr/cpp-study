#include "poligono.h"
#include "quadrado.h"
#include "retangulo.h"

int main()
{
    cout << "Hello Code::Blocks for C++\n";
    Poligono teste;
    Retangulo testeret;
    Quadrado testequad;
    teste.setValue(34,28);
    teste.show();
    testequad.setValue(5,5);
    testequad.show();
    testeret.setValue(15,5);
    testeret.show();
    return 0;
}
