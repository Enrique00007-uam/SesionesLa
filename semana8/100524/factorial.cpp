/*Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial.*/
#include <iostream>

using namespace std;

int number = 0, fact = 1;


int main(int argc, char const *argv[])
{
    cout << "dime un numero: ";
    cin >> number;

    if (number >0 )
    {
        while (number != 1)
        {
            fact *= number;
            number--;
        }
       cout << fact << endl;
       }else{ cout << "debe ingresar un numero positivo ";
       }
       
        
   
    
    return 0;

 }