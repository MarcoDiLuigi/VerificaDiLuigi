/** 
    Verifica Di Luigi Marco - 5AIA - 21/11/2017
    
    Questo programma C esegue un ciclo da 1 a 10 e visualizza in output la variabile contatore C 
**/

#include <iostream>
using namespace std;

int main()
{
     int c = 0; //Inizializzo la Variabile C
     for (int i=0;i<10;i++) //Inizio il ciclo da 1 a 10
     {
         c++; //Incremento della Variabile C
         cout <<"C = " << c << endl; //Stampa a video la Variabile C
     }
     system ("PAUSE");
}
