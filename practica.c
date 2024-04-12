#include <stdio.h>

int main(int argc, char const *argv[])
{
    //practica printf
printf("Hola como, ojala pueda pasar la clase de LyA \n");
    printf("aaaaaaaaaaaaaaaaaaaaa \n");
     //practica de equaciones 
    int resultado;
    resultado = 5 + 5;
    
    printf("%i", resultado);
  
  // practica scanf
  int numero1;
  int numero2;
int resultado2;
  
  printf("ingresa el primer numero ");
  scanf("%i", &numero1);
  printf ("ingresa el segundo numero ");
  scanf("%i", &numero2);
 resultado2 = numero1 + numero2;
 printf("%i", resultado2);


//practica if, else
  
  if (resultado2 < 50)
  {
    printf("Mi numero es menor que 50");

  }
  else
  {
    printf("Mi numero es igual o mayor que 50");
  }
  
    return 0;
}

