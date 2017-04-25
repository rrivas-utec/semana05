#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vnumeros;
    
    int n = 0;
    cout << "Ingrese el numero de datos:";
    cin >> n;
    
    // for para el ingreso de los datos
    for (int i = 1; i <= n; i++)
    {
        int x = 0;
        cout << "Ingresar el valor #" << i << " :";
        cin >> x;
        vnumeros.push_back(x);
    }
    
    for(auto i: vnumeros)
    {
        cout << i << " ";
    }
        
    
    return 0;
}