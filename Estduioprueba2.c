#include <stdio.h>
//realizar una funcion que calcule el area de un triangulo



//declaracion de funcion
int areaTriangulo(int base, int altura);


int main(int argc, char const *argv[])
{
   
   //pidiendo datos al usuario
    int b, al, ar;
    printf("ingrese la base de su triangulo: ");
    scanf("%d",&b);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d",&al);
    //llamando a la funcion
    ar = areaTriangulo(b, al);
    printf("el area del triangulo es: %d", ar);
    
    
    return 0;
}
//programando que va a hacer funcion
int areaTriangulo(int base, int altura){

    int area;

    area = base*altura / 2;
    return area;
}