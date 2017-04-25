#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<char> vtexto = {'H', 'o', 'l', 'a'};
    
    cout << "Tamaño: " << vtexto.size() << endl;
    cout << "Caracter de la posicion 3: " << vtexto[2] << endl;
    
    // Imprimir todos los caracteres
    for (auto i: vtexto)
    {
        cout << i;
    }
    
    return 0;
}