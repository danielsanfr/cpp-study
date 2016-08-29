//Refazendo tudo

#include <fstream>
#include <iostream>
#include <string>

using namespace std; 

int main ()
{
	string data;
	ofstream outfile;
	outfile.open("san.txt");
	if(outfile.is_open() && outfile.good())
	{
		cout << "Escrevendo no arquivo" << endl;
		cout << "===================" << endl;
		cout << "Informe o nome da classe: ";
		getline(cin, data);
		outfile << data<< endl;
		cout << "informe o número de estudantes: ";
		cin >> data;
		cin.ignore();
		outfile << data<< endl;
		outfile.close();
	}
	ifstream infile; 
	infile.open("san.txt");
	if(infile.is_open() && infile.good())
	{ 
		cout << "Lendo do arquivo" << endl; 
		cout << "=====================" << endl; 
		getline(infile, data);
		while(!infile.fail())
		{
			cout << data << endl; 
			getline(infile, data);
		}
		infile.close();
	}
	#ifdef WIN32
	system ("pause");
	#endif
	return 0;
}
