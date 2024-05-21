#define MAXREGISTER 100
#define MAXCHAR 60
typedef struct PERSON //es para agrupar varias varibales
//Organizan informacion que se relacionan entre si o tienen algo en comun, en este caso la informacion de un estudiante,
// como es estructura untiliza llaves y al final de las llaves lleva punto y coma.

{
    char cif[MAXCHAR];
   char name[MAXCHAR];
   char lastName[MAXCHAR];
   int grade;
};


