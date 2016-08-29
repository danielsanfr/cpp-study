#include <iostream>

using namespace std;

int main()
{
	int val1 = 10;
	int val2 = 20;
	int &ref = val1;
	cout << "val1 is " << val1 << endl;
	cout << "val2 is " << val2 << endl;
	cout << "ref is " << ref << endl;
	ref = val2;    //What does this do?
	cout << endl << "ref = val2" << endl;
	cout << "val1 is " << val1 << endl;
	cout << "val2 is " << val2 << endl;
	cout << "ref is " << ref << endl;
	val2 = 30;
	cout << endl << "Setting val2 = 30" << endl;
	cout << "val1 is " << val1 << endl;
	cout << "val2 is " << val2 << endl;
	cout << "ref is " << ref << endl;
//	system ("pause");
	return 0;
}
