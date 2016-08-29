#include "linkedlist.h"
#include "arraylist.h"
#include "list.h"

int main()
{
    int i;
    ArrayList listaArray;
    cout << "GETVALUE SEM ITENS NA LISTA: " << listaArray.getValue() << endl;
    cout << "LENGTH SEM ITENS NA LISTA: " << listaArray.length() << endl;
    listaArray.clear();
    cout << "CLEAR SEM ITENS NA LISTA" << endl;
    cout << "REMOVE SEM NADA NA LISTA: " << listaArray.remove() << endl;
    listaArray.append(10);
    listaArray.append(20);
    cout << "GETVALUE COM ITENS NA LISTA: " << listaArray.getValue() << endl;
    cout << "REMOVE COM ITENS NA LISTA: " << listaArray.remove() << endl;
    listaArray.clear();
    cout << "CLEAR COM ITENS NA LISTA" << endl;
    listaArray.insert(40);
    listaArray.insert(30);
    listaArray.insert(10);
    listaArray.next();
    listaArray.insert(20);
    cout << "LENGTH COM ITENS NA LISTA: " << listaArray.length() << endl;
    listaArray.moveToEnd();
    cout << "CURRPOS COM ITENS NA LISTA: " << listaArray.currPos() << endl;
    listaArray.insert(35);
    listaArray.moveToStart();
    listaArray.insert(0);
    listaArray.append(50);
    for(i = 0; i < listaArray.length(); ++i)
    {
        listaArray.moveToPos(i);
        cout << listaArray.getValue() << " ";
    }
    cout << endl;
    cout << "===========================================" << endl;
    LinkedList listaLigada;
    cout << "GETVALUE SEM ITENS NA LISTA: " << listaLigada.getValue() << endl;
    cout << "LENGTH SEM ITENS NA LISTA: " << listaLigada.length() << endl;
    listaLigada.clear();
    cout << "CLEAR SEM ITENS NA LISTA" << endl;
    cout << "REMOVE SEM NADA NA LISTA: " << listaLigada.remove() << endl;
    listaLigada.append(10);
    listaLigada.append(20);
    cout << "GETVALUE COM ITENS NA LISTA: " << listaLigada.getValue() << endl;
    cout << "REMOVE COM ITENS NA LISTA: " << listaLigada.remove() << endl;
    listaLigada.clear();
    cout << "CLEAR COM ITENS NA LISTA" << endl;
    listaLigada.insert(40);
    listaLigada.insert(30);
    listaLigada.insert(10);
    listaLigada.next();
    listaLigada.insert(20);
    cout << "LENGTH COM ITENS NA LISTA: " << listaLigada.length() << endl;
    listaLigada.moveToEnd();
    cout << "CURRPOS COM ITENS NA LISTA: " << listaLigada.currPos() << endl;
    listaLigada.insert(35);
    listaLigada.moveToStart();
    listaLigada.insert(0);
    listaLigada.append(50);
    for(i = 0; i < listaLigada.length(); ++i)
    {
        listaLigada.moveToPos(i);
        cout << listaLigada.getValue() << " ";
    }
    cout << endl;
    return 0;
}
