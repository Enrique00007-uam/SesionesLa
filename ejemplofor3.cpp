// alamcenar x cantidad de nuemros e imrpimir dichos numeris

#include <iostream>
using namespace std;

#define MAX 100

int vector[MAX]; //arreglo o vector

void agregar(int num);
int pos=0; //posicion o ubicacion del elemento en el arreglo

void mostar();





int main(int argc, char const *argv[])
{
    int op;
    return 0;
}



void agregar(int){
    vector[pos]=num;
    pos++;
}

void mostar(){
    for(int i = 0; i<=pos; i++){
        cout << vector[i] << endl;
    }
}