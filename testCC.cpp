#include <iostream>
#include <string.h>
using namespace std;


class Obj {
	public:
	char * name;
	Obj(char * newName){
		cout << "Creating Obj with name: " << newName << endl;
		name = new char[strlen(newName) + 1];
		strcpy(name, newName);
	}
	~Obj(){
		cout << "Deleting Obj with name: " << name << endl;
		delete name;
	}
};

int main() {
    char * n;
    Obj test("nop");
    {
	Obj * o = new Obj("test");// = new Obj("teste");
	test = *o;
	n = o->name;
	delete o;
    }
    cout << test.name << endl;
    return 0;
}
