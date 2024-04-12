#include <stdio.h>

//Pedir la calificación de 3 materias
//de un mismo alumno. Sumarlas y sacar
//el promedio. Si el promedio es mayor o igual
//a 70 (0 7) aprueba, de 10 contrario,
//reprueba.

int main(int argc, char const *argv[])
{
int calificacion1;
int calificacion2;
int calificacion3;
int calificacionTotal;
int calificacionPromedio;



    printf("Este programa es para calcular su promedio en la clase e indicarle si aprobo o reprobo \n");
    printf("Ingrese su primera calificacion: \n"); 
    scanf("%i",&calificacion1);
    printf("Ingrese su segunda calificacion: ");
    scanf("%i",&calificacion2);
    printf("Ingrese su tercera calificacion: ");
    scanf("%i",&calificacion3);
    
 calificacionTotal = calificacion1 + calificacion2 + calificacion3;
 calificacionPromedio = calificacionTotal / 3;
 printf("Su calificacion promedio es ""%i",calificacionPromedio);

 if (calificacionPromedio > 70 )
 {
    printf(". Felicidades usted a aprobado la materia \n");

 }
 else
 {
    printf(". Lo siento usted a reprobado la materia");
 }
 
    return 0;
}

