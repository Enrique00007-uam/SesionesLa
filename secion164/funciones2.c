#include <stdio.h>
// calcular las notas de un estudiante que poseee un acumulado de  60 puntos y un examen de 40 puntos,
// decir si esta aprobado
// si su nota es igual o mayor a 70.

int calFinalSc(int score, int test);

int calFinalSc(int score, int test)
{
    return score + test;
}
void calFinal(int score);

void pedirNotas();

int main(int argc, char const *argv[])
{
    pedirNotas();

    return 0;
}

void pedirNotas()
{
    int acumulado, examen, notaFinal;
    printf("dime el acumulado: ");
    scanf("%d", &acumulado);
    printf("dime la nota del examen: ");
    scanf("%d", &examen);
    notaFinal = calFinalSc(acumulado, examen);
    printf("nota final %d\n", notaFinal);
    calFinal(notaFinal);
}

void calFinal(int score)
{
    if (score >= 70)
        printf("aprobado");
    else
        printf("reprobado");
}