/*
               ()10
              /  \
             /    \
            /      \
           /        \
          /          \
         /            \
        /              \
       /                \
      ()5               ()16
     /  \              /  \
    /    \            /    \
   /      \          /      \
  ()3     ()8       ()14     ()18
 /  \    /  \      /  \
()2 ()4 ()6 ()9   ()12()15
*/

#include "mybinarytree.h"

int main()
{
    MyBinaryTree arvore;
    arvore.clear();
    cout << arvore.height() << endl;
    cout << arvore.pathForNode(9) << endl;
    if(arvore.isFull())
        cout << "FULL BINARY TREE.\n";
    if(arvore.isComplete())
        cout << "COMPLETE BINARY TREE.\n";
    arvore.insert(10);
    arvore.insert(5);
    arvore.insert(3);
    arvore.insert(8);
    arvore.insert(2);
    cout << arvore.height() << endl;
    cout << arvore.pathForNode(9) << endl;
    if(arvore.isFull())
        cout << "FULL BINARY TREE.\n";
    if(arvore.isComplete())
        cout << "COMPLETE BINARY TREE.\n";
    arvore.clear();
    cout << arvore.height() << endl;
    cout << arvore.pathForNode(9) << endl;
    if(arvore.isFull())
        cout << "FULL BINARY TREE.\n";
    if(arvore.isComplete())
        cout << "COMPLETE BINARY TREE.\n";
    arvore.insert(10);
    arvore.insert(5);
    arvore.insert(3);
    arvore.insert(8);
    arvore.insert(2);
    arvore.insert(4);
    arvore.insert(6);
    arvore.insert(9);
    arvore.insert(16);
    arvore.insert(14);
    arvore.insert(18);
    arvore.insert(12);
    arvore.insert(15);
    /*arvore.insert(5);
    arvore.insert(3);
    arvore.insert(4);
    arvore.insert(1);
    arvore.insert(2);
    arvore.insert(8);
    arvore.insert(7);
    arvore.insert(0);
    arvore.insert(10);
    arvore.insert(9);
    arvore.insert(11);
    arvore.insert(12);
    arvore.insert(100);
    arvore.insert(111);*/
    cout << arvore.height() << endl;
    cout << arvore.pathForNode(9) << endl;
    if(arvore.isFull())
        cout << "FULL BINARY TREE.\n";
    if(arvore.isComplete())
        cout << "COMPLETE BINARY TREE.\n";
    cout << arvore.height() << endl;
    cout << arvore.pathForNode(9) << endl;
    if(arvore.isFull())
        cout << "FULL BINARY TREE.\n";
    if(arvore.isComplete())
        cout << "COMPLETE BINARY TREE.\n";
    arvore.insert(17);
    cout << arvore.height() << endl;
    cout << arvore.pathForNode(9) << endl;
    if(arvore.isFull())
        cout << "FULL BINARY TREE.\n";
    if(arvore.isComplete())
        cout << "COMPLETE BINARY TREE.\n";
    return 0;
}
