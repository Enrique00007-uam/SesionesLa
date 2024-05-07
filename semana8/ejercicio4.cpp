#include <iostream>

using namespace std;


/*buscar los primeros 300 numeros pares*/

int main(int argc, char const *argv[])
{
int i = 0;
int cont = 0;

while(cont < 300)
{
    i++;    
    if (i %2 == 0){

        cont ++;
        cout << cont << " " << i << endl;
    }

}
    return 0;
}

