//Exemplificando o uso de manipuladores:

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int intValue = 15;

	cout << "Número inteiro" << endl;
	cout << "Padrão: " << intValue << endl;
	cout << "Octal: " << oct << intValue << endl;
	cout << "Hexadecimal: " << hex << intValue << endl;
	cout << "Ativando showbase " << showbase << endl;
	cout << "Decimal: " << dec << intValue << endl;
	cout << "Octal: " << oct << intValue << endl;
	cout << "Hexadecimal: " << hex << intValue << endl;
	cout << "Desativando showbase " << noshowbase << endl;
	cout << endl;

	double doubleVal = 12.345678;

	cout << "Números com ponto flutuante" << endl;
	cout << "Padrão: " << doubleVal << endl;
	cout << setprecision(10);
	cout << "Precisão de 10: " << doubleVal << endl;
	cout << scientific << "Notação científica: " << doubleVal << endl;
	cout << uppercase;
	cout << "Caixa alta: " << doubleVal << endl;
	cout << endl;

	bool theBool = true;

	cout << "Booleano" << endl;
	cout << "Padrão: " << theBool << endl;
	cout << boolalpha << "BoolAlpha ativo: " << theBool << endl;
	cout << endl;

	string myName = "John";

	cout << "Strings" << endl;
	cout << "Padrão: " << myName << endl;
	cout << setw(35) << right << "Com setw(35) e \"right\": " << myName << endl;
	cout.width(20);
	cout << "Com width(20): " << myName << endl;
	cout << endl;

	#ifdef WIN32
	system ("pause");
	#endif

	return 0;
}
