#include <fstream>
#include <iostream>

using namespace std;

int main ()
{
	ifstream arq;                       //crio objecto "arq" da classe ifstream - leitura
	string str;
	arq.open("san.txt");         //chamo função membro open
	if (arq.is_open() && arq.good())
	{
		arq >> str;
		cout << "conteúdo: \n " << str << endl;      //imprime o conteúdo do arquivo       
		arq.close();
	}
	#ifdef WIN32
	system ("pause");
	#endif
	return 0;
}
