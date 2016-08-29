#include "aqueue.h"
#include "lqueue.h"

int main()
{
    int i, tam;
    AQueue filaArray;
    cout << "Testes da fila com array.\n";
    filaArray.clear();
    cout << "CLEAR SEM NADA NA FILA.\n";
    cout << "FRONTVALUE SEM NADA NA FILA: " << filaArray.frontValue() << endl;
    cout << "DEQUEUE SEM NADA NA FILA: " << filaArray.dequeue() << endl;
    filaArray.enqueue(10);
    filaArray.enqueue(20);
    cout << "FRONTVALUE COM ITENS NA FILA: " << filaArray.frontValue() << endl;
    cout << "DEQUEUE COM ITENS NA FILA: " << filaArray.dequeue() << endl;
    filaArray.enqueue(30);
    cout << "FRONTVALUE COM ITENS NA FILA: " << filaArray.frontValue() << endl;
    filaArray.clear();
    cout << "CLEAR COM ITENS NA FILA.\n";
    filaArray.enqueue(10);
    filaArray.enqueue(20);
    filaArray.enqueue(30);
    filaArray.enqueue(40);
    filaArray.enqueue(50);
    filaArray.dequeue();
    filaArray.dequeue();
    filaArray.enqueue(60);
    filaArray.enqueue(70);
    cout << "TAMANHO DA FILA: " << filaArray.length() << endl;
    tam = filaArray.length();
    for (i = 0; i < tam; ++i)
        cout << filaArray.dequeue() << " ";
    cout << endl << "======================================="<< endl;
    cout << "Testes da fila com lista ligada.\n";
    LQueue filaLigada;
    filaLigada.clear();
    cout << "CLEAR SEM NADA NA FILA.\n";
    cout << "FRONTVALUE SEM NADA NA FILA: " << filaLigada.frontValue() << endl;
    cout << "DEQUEUE SEM NADA NA FILA: " << filaLigada.dequeue() << endl;
    filaLigada.enqueue(10);
    filaLigada.enqueue(20);
    cout << "FRONTVALUE COM ITENS NA FILA: " << filaLigada.frontValue() << endl;
    cout << "DEQUEUE COM ITENS NA FILA: " << filaLigada.dequeue() << endl;
    filaLigada.enqueue(30);
    cout << "FRONTVALUE COM ITENS NA FILA: " << filaLigada.frontValue() << endl;
    filaLigada.clear();
    cout << "CLEAR COM ITENS NA FILA.\n";
    filaLigada.enqueue(10);
    filaLigada.enqueue(20);
    filaLigada.enqueue(30);
    filaLigada.enqueue(40);
    filaLigada.enqueue(50);
    filaLigada.dequeue();
    filaLigada.dequeue();
    filaLigada.enqueue(60);
    filaLigada.enqueue(70);
    cout << "TAMANHO DA FILA: " << filaLigada.length() << endl;
    tam = filaLigada.length();
    for (i = 0; i < tam; ++i)
        cout << filaLigada.dequeue() << " ";
    cout << endl;
    return 0;
}
