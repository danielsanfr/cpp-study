//Exemplo cin.get().

#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	do
	{
		cout << "Pressione S ou s para sair, \nqualquer outra tecla para continuar: "; 
		cin.get(ch);
		if (ch != 'S' && ch != 's')
		cout << "Deseja continuar?"<<endl;
		else
		cout << "Saindo..."<<endl;
	} while (ch != 'S' && ch != 's');
	return 0;
}
