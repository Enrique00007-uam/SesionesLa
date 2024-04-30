#include<iostream>

using namespace std;

void esPar(int num){

    if(num%2==0)

        printf("es par...\n");
    }
int main(){
    int num;
    cout << "ingrese un numero: ";
    cin >> num;
    esPar(num);
    return 0;
}

