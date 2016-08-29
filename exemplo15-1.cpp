// classes example
#include <iostream>

using namespace std;

class CRectangle 
{
	int x, y;
	public:
	void set_values (int,int);
	int area ()
	{
		return (x*y);
	}
};

void CRectangle::set_values (int a, int b) 
{
	x = a;
	y = b;
}                 

//repare no “::” que pemite-nos definir a função membro da classe CRectangle fora da classe

int main () 
{
	CRectangle rect;     //definimos objecto de classe
	rect.set_values (3,4);       //objecto-membro
	cout << "area: " << rect.area();
	//system (“pause”); 
	return 0;
}
