//O problema “pressione uma tecla para continuar...”

#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	do
	{
		cout << "Pressione S ou s para sair, qualquer outra tecla para continuar: "; 
		cin >> ch; 
		if (ch != 'S' && ch != 's')
		cout << "Deseja continuar?"<<endl;
		else
		cout << "Saindo..."<<endl;
	} while (ch != 'S' && ch != 's');
	return 0;
}


