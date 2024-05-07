/*leer un numero y otbeter la tabla de deicho numero*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int numero, Nmultiplicacion, resultado;
    int i = 0;
    cout <<"ingresa de la tabla de multiplicacion: ";
    cin >> numero;
    


    while (i <= 11)
    {
       i++;
       resultado=i*numero;
       cout << numero<<" x "<< i << " = " <<resultado << endl;
    }
    
    
    return 0;
}