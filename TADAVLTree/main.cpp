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

#include "myavltree.h"

int main()
{
    MyAvlTree arvore;
    arvore.insert(9);
    arvore.insert(8);
    arvore.insert(1);
    cout << arvore.height() << endl;
    arvore.insert(2);
    cout << arvore.height() << endl;
    arvore.insert(3);
    cout << arvore.height() << endl;
    arvore.insert(4);
    cout << arvore.height() << endl;
    arvore.insert(5);
    cout << arvore.height() << endl;
    arvore.insert(6);
    cout << arvore.height() << endl;
    arvore.insert(7);
    cout << arvore.height() << endl;
    cout << endl << arvore.pathForNode(9) << endl;
    return 0;
}
