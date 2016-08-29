#include "llist.h"

LList::LList()
{
    this->head = 0;
}

void LList::append(int value)
{
    Cell * newCell = new Cell(value);
    if(this->head == 0) {
        this->head = newCell;
    } else {
        Cell * curr = this->head;
        while(curr->next != 0) {
            curr = curr->next;
        }
        curr->next = newCell;
    }
}

void LList::show()
{
    Cell * curr = this->head;
    while(curr != 0) {
        cout << curr->value << endl;
        curr = curr->next;
    }
}
