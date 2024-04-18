 //sumar 2 numeros

 #include <stdio.h>

/*prototipo de funcion*/
 int suma(int num1, int num2);
 //funcion
 int suma(int num1, int num2){

    return num1 + num2;
 }
 
 int main(int argc, char const *argv[])
 {
    int num1, num2;
    printf("dime el primer valor");
    scanf("%d", &num1);
    printf("dime el segundo valor");
    scanf("%d", &num2);
    printf("la suma de %d + %d es \n", num1, num2);
    printf("%d", suma(num1, num2));
    
    return 0;
 }
 




 
 
 


 
 
 
 

 