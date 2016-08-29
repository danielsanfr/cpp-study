/*Agora já obtemos 2 palavras e são apresentadas em linhas diferentes.
Mas temos de arranjar um método para não estar a repetir constantemente, podemos fazer isso com
infile.getline(data, 80);
Então ficamos com:*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string data;
	ofstream outfile;
	outfile.open("san.txt");
	if(outfile.is_open() && outfile.good())	//verificamos se está tudo bem
	{
		cout << "Writing to the file" << endl;
		cout << "===================" << endl;
		cout << "Enter class name: ";
		getline(cin, data);
		outfile << data << endl;
		cout << "Enter number of students: ";
		cin >> data;
		cin.ignore();				//esta função membro é para limpar o caractere 
									//newline do inputbuffer depois de usar o objecto 
									//cin com o operador de extração >>
		outfile << data << endl;
		outfile.close();
	}
	ifstream infile; 
	infile.open("san.txt"); 
	if(infile.is_open() && infile.good())	//verificamos se está tudo bem
	{
		cout << "Reading from the file" << endl; 
		cout << "=====================" << endl; 
		getline(infile, data);
		cout << data << endl; 
		getline(infile, data);
		cout << data << endl; 
		infile.close();
	}
	#ifdef WIN32
	system ("pause");
	#endif
	return 0;
}
