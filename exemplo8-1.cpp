#include <iostream>

using namespace std;

int main(void)
{
	char name[80];
	int courseNum;
	cout << "Informe o número do curso: ";
	cin >> courseNum;
	cout << "Informe seu nome: ";
	cin.getline(name, 80);
	cout << "O número do curso é: " << courseNum << endl;
	cout << "Seu nome é: " << name << endl;
	return 0;
}
