#include "lstack.h"
#include "astack.h"

int main()
{
    int i, aux;
    AStack pilhaarray;
    cout << "LENGTH SEM NADA NA PILHA: " << pilhaarray.length() << endl;
    cout << "POP SEM NADA NA PILHA: " << pilhaarray.pop() << endl;
    cout << "TOPVALUE SEM NADA NA PILHA: " << pilhaarray.topValue() << endl;
    pilhaarray.clear();
    cout << "CLEAR SEM NADA NA PILHA\n";
    pilhaarray.push(50);
    pilhaarray.push(40);
    pilhaarray.clear();
    cout << "CLEAR COM ITENS PILHA\n";
    pilhaarray.push(60);
    cout << "POP COM ITEM PILHA: " << pilhaarray.pop() << endl;
    pilhaarray.push(50);
    pilhaarray.push(40);
    pilhaarray.push(30);
    pilhaarray.push(20);
    pilhaarray.push(10);
    cout << "TOPVALUE: " << pilhaarray.topValue() << endl;
    cout << "LENGTH: " << pilhaarray.length() << endl;
    aux = pilhaarray.length();
    for(i = 0 ; i < aux ; ++i) cout << "ITEM NA PILHA: " << pilhaarray.pop() << " ";
    cout << endl;
    cout << "\n=========================================================\n\n";
    LStack pilhaligada;
    cout << "LENGTH SEM NADA NA PILHA: " << pilhaligada.length() << endl;
    cout << "POP SEM NADA NA PILHA: " << pilhaligada.pop() << endl;
    cout << "TOPVALUE SEM NADA NA PILHA: " << pilhaligada.topValue() << endl;
    pilhaligada.clear();
    cout << "CLEAR SEM NADA NA PILHA\n";
    pilhaligada.push(50);
    pilhaligada.push(40);
    pilhaligada.clear();
    cout << "CLEAR COM ITENS PILHA\n";
    pilhaligada.push(60);
    cout << "POP COM ITEM PILHA: " << pilhaligada.pop() << endl;
    pilhaligada.push(50);
    pilhaligada.push(40);
    pilhaligada.push(30);
    pilhaligada.push(20);
    pilhaligada.push(10);
    cout << "TOPVALUE: " << pilhaligada.topValue() << endl;
    cout << "LENGTH: " << pilhaligada.length() << endl;
    aux = pilhaligada.length();
    for(i = 0 ; i < aux ; ++i) cout << "ITEM NA PILHA: " << pilhaligada.pop() << " ";
    cout << endl;
    return 0;
}
