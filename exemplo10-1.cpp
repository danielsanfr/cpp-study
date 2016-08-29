/*Verificar se o ficheiro (arquivo) foi aberto.

Vamos verificar o que acontece quando tentamos abrir um arquivo que não existe, a primeira versão do nosso exemplo observa o comportamento básico do fstream:*/

#include <fstream>
#include <iostream>

using namespace std;

int main ()
{
	ifstream arq;                       //crio objecto "arq" da classe ifstream - leitura
	arq.open("san.txt");         //chamo função membro open

	cout << "(arq) = " << arq << endl;        //imprime o objecto   
	cout << "(arq.fail()) = " << arq.fail() << endl;       //chamo função membro fail
	return 0;
}
