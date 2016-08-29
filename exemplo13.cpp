#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char input[80];
	int num;
	cout << "Enter an integer: ";
	cin >> input;
	for (int x = 0; x < strlen(input); x++)
	{
		if (x == 0)
		{
			if (!isdigit(input[x]) && input[x] != '-')
			return 1;
		}
		else 
		{
			if (!isdigit(input[x]))
			return 2;
		}
	}
	num = atoi(input);
	cout << num;
	#ifdef WIN32
	system ("pause");
	#endif
	return 0;
}
