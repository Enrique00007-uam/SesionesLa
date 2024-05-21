#include <iostream>
#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    cout << "cif: ";
    cin >> teacher.cif;
    cout << "nombre: ";
    scanf (" %[^\n]s", teacher.name);
    cout << "Apellido: ";
    scanf(" %[^\n]s", teacher.lastName);
    

    cout << "El profesor tiene por cif: " << teacher.cif << endl;
    cout << "El profesor tiene por nombre completo: " << teacher.name << teacher.lastName << endl;

    PERSON students[MAXREGISTER];
    cout <<" Datos del estudiante:" << endl;
    
    int op, i=0;
    
    do{
  system("cls||clear");
  cout << "cif: ";
    cin >> students[i].cif;
    cout << "nombre: ";
    scanf (" %[^\n]s", students[i].name);
    cout << "Apellido: ";
    scanf(" %[^\n]s", students[i].lastName);
    cout << "Nota: ";
    scanf ("%d", &students[i].grade);

    cout << "Desea ingresar otro registro" << endl;
    cout << "1. Si" << endl;
    cout << "0. No" << endl;
    cout << "Digite su opcion: "<< endl;
    cin >> op;
    i++;
    }while (op!=0);

   printf("Datos del profesor: \n cif: %sn", teacher.cif);
   printf("Nombre completo: %s %s\n", teacher.name, teacher.lastName);
   cout <<"Lista de los estudiantes: \n";
   for (int j = 0; j < i; j++){
    printf("Nombre: %s \nApellidos: %s \nNota: %d\n",
    students[j].name, students[j].lastName, students[j].grade);
   }
    return 0; 
}
