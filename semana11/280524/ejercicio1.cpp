/*Desarrollar un programa que permita crear un archivo agenda.dat de
direcciones, cuyos registros constan de los siguientes campos:
nombre, edad, direcion, ciudad, telefono*/
#include <iostream>
using namespace std;

#define MAX 100
struct Direccion{
    char nombre[MAX];
    int edad;
    char direccion[MAX];
    char ciudad[MAX];
    char telefono[MAX];
};

