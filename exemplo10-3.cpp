//Vamos criar um exemplo mais real. Queremos criar um programa que escreva informação inserida pelo utilizador num ficheiro por nós escolhido

#include <fstream>
#include <iostream>

using namespace std;

int main ()
{        
	char data[80];				//criamos um array de 80 caracteres
	ofstream outfile;			//criamos objecto da classe ofstream
	outfile.open("san.txt");	//chamamos a função membro da classe para o objecto criado.
								// Esta função membro cria o arquivo "san.txt"
	if(outfile.is_open() && outfile.good())	//verificamos se está tudo bem
	{
		cout << "digite o seu nome: ";	//imprime no ecrã (monitor) a frase 
		cin.getline(data, 80);			//chama função membro getline do objecto cin para 
										//ler o que foi escrito pelo usuário
		outfile << data << endl;		//coloca o array no objecto criado.   
		outfile.close();				//fechamos o objecto.
	}
	#ifdef WIN32
	system ("pause");
	#endif
	return 0;
}
