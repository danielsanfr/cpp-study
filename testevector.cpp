#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i;
	vector<int> meuVector; // Novo Vector com 0 elementos
	meuVector.push_back(42); // Adicionar elemento 42 no fim do vector
	// Mostrar estatísticas do vector.
	cout << "Tamanho do MeuVector: " << meuVector.size() << endl;
	cout << "Máximo Tamanho do MeuVector: " << meuVector.max_size() << endl;
	cout << "Capacidade de MeuVector: " << meuVector.capacity() << endl;
	// Assegurar que tem espaço para pelo menos 1000 elementos.
	meuVector.reserve(1000);
	cout << endl << "Depois de reservar espaço para 1000 elementos:" << endl;
	cout << "Tamanho do MeuVector: " << meuVector.size() << endl;
	cout << "Máximo Tamanho do MeuVector: " << meuVector.max_size() << endl;
	cout << "Capacidade de MeuVector: " << meuVector.capacity() << endl;
	// Garantir que tem espaço para pelo menos 2000 elementos.
	//meuVector.resize(2000);
	cout << endl << "Depois de Resize para 2000 elementos:" << endl;
	cout << "Tamanho do MeuVector: " << meuVector.size() << endl;
	cout << "Máximo Tamanho do MeuVector: " << meuVector.max_size() << endl;
	cout << "Capacidade de MeuVector: " << meuVector.capacity() << endl;
	meuVector.push_back(43);
	meuVector.push_back(44);
	meuVector.push_back(45);
	meuVector.push_back(46);
	for(i = 0 ; i < meuVector.size() ; ++i) cout << meuVector[i] << " ";
	cout << endl << meuVector.size() << endl;
	cout << meuVector.begin() << endl;
	cout << meuVector.end() << endl;
}
