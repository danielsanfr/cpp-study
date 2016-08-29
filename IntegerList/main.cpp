#include "integerlist.h"

int main()
{
    int i, num, pos, op;
    IntegerList teste;
    cout << "inserir -> 1\nremover -> 2\nempty -> 3\nrenicializar -> 4\nsize -> 5\n";
    cin >> op;
    while(op != -1)
    {
        cin >> num >> pos;
        switch(op)
        {
            case 1:
                teste.insertAt(num, pos);
                for(i = 0 ; i < teste.count ; ++i)
                    cout << teste.at(i) << " ";
                cout << endl << endl;
                break;
            case 2:
                teste.removeAt(pos);
                for(i = 0 ; i < teste.count ; ++i)
                    cout << teste.at(i) << " ";
                cout << endl << endl;
                break;
            case 3:
                cout << teste.isEmpty() << endl << endl;
                break;
            case 4:
                teste.reintialize();
                cout << teste.count << endl << endl;
                break;
            case 5:
                cout << teste.size() << endl << teste.count << endl << endl;
                break;
        }
        cin >> op;
    }
    return 0;
}
