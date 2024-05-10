#include <iostream>

using namespace std;

/*Escribe un programa que solicite al usuario un número entero positivo y luego
imprima todos los números desde 1 hasta ese número.*/



int main(int argc, char const *argv[])
{
    int number = 0, sum = 0;


    while (number >= 0)
    {
        sum += number;
        cout << "dime un numero: ";
        cin >> number;
        

    }

    cout << "la suma es " << sum << endl; 
    
    return 0;
}

