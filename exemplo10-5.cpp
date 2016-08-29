//Repare que se tivéssemos escrito duas palavras, apenas uma era apresentada (ela pára no primeiro whitespace), para isso necessitaríamos de repetir:

#include <fstream>
#include <iostream>

using namespace std;

int main ()
{
	char data[80];
	ifstream infile; 
	infile.open("san.txt");
	if(infile.is_open() && infile.good())	//verificamos se está tudo bem
	{
		infile >> data;				//colocamos os dados abertos no array
		cout << data << endl; 
		infile >> data;				//colocamos os dados abertos no array
		cout << data << endl;     
		infile.close();
	}
	#ifdef WIN32
	system ("pause");
	#endif
	return 0;
}
