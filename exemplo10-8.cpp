/*Agora vamos fazer o nosso programa mais modular:
. writeFile – para abrir um arquivo para escrita usando o ofstream e
. readFile - ler do ficheiro (arquivo) usando o ifstream
. Cada função irá verificar se o ficheiro (arquivo) foi aberto com sucesso*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool writeFile (ofstream&, char*);
bool readFile (ifstream&, char*); 

int main ()
{
	string data;
	bool status; 
	ofstream outfile;
	status = writeFile(outfile, "students.dat");
	if(!status)
	{
		cout << "Arquivo não pode ser aberto para escrita.\n";
		cout << "Programa terminando...\n";
		return 0;
	}else{
		cout << "Escrevendo no arquivo" << endl;
		cout << "===================" << endl; 
		cout << "Informe o nome da classe: "; 
		getline(cin, data); 
		outfile << data<< endl;
		cout << "Informe o número de estudantes: "; 
		cin >> data;
		cin.ignore();
		outfile << data<< endl;
		outfile.close();
	}
	ifstream infile;
	status = readFile(infile, "students.dat");
	if(!status)
	{
		cout << "O arquivo não pode ser aberto para leitura.\n";
		cout << "Programa terminando...\n";
		return 0;
	}else{
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

bool writeFile(ofstream& file, char* strFile)
{
	file.open(strFile);
	return !(file.fail()||!file.is_open()||!file.good());
}

bool readFile(ifstream& ifile, char* strFile)
{
	ifile.open(strFile);
	return !(ifile.fail()||!ifile.is_open()||!ifile.good());
}
