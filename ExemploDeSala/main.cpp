#include "llist.h"
int main()
{
   LList * l = new LList;
   l->append(10);
   l->append(20);
   l->append(30);
   l->append(40);
   l->append(50);
   l->append(60);
   l->show();
   return 0;
}
