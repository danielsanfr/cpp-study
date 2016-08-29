//Função swap.

#include <iostream>

using namespace std; 

void Swap (int &i,int &j)
{
	int t = i;
	i = j;
	j =t ;
}

int main ()
{
	int a, b; 
	a = 5;
	b = 10;
	cout << a << "\t" << b << endl;
	Swap (a,b);
	cout << a << "\t" << b << endl;
//	system ("pause");
	return 0;
}
