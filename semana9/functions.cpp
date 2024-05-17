
#include <iostream>
#include "Variables.h" // Incluimos el archivo Variables.h
using namespace std;

/*Prototipos de funciones*/
void principal();
void menu();
void ingresarEdades();
void showages();

/*Funciones*/
void menu()
{
    system("cls || clear"); // Limpiamos la pantalla
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Mostrar edad mayor" << endl;
    cout << "4. Mostrar edad menor" << endl;
    cout << "5. Mostrar promedio de edades" << endl;
    cout << "6. Salir" << endl;
}

/*Agregar edades*/
void ingresarEdades()
{
    system("cls || clear");
    cout << "Ingrese la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void showages(){
        system("cls||clear");
        cout << "edades: "<< endl;
        for (int i = 0; i < pos; i++){
            cout << ages[i] << endl;
            
        }
    system("pause");
    }
void principal()
{
    int option;
    while (option!=6)
    {
        menu();
        cout << "Ingrese una opcion: ";
        cin>>option;
        switch (option)
        {
            case 1:
                ingresarEdades();
                break;
                case 2:
                showages();
                break;
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                break;
        }
    }
    


}