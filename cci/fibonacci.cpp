//"Este programa imprime los primeros numeros de fibonacci en los 100 primeros numeros"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  double lista_fibo[200];
  lista_fibo[0]=0;
  lista_fibo[1]=1;
  for(int x = 2 ; x <= 100 ; x++)
  {
    lista_fibo[x] = lista_fibo[x-1] + lista_fibo[x-2];
  }
  for(int x = 0 ; x<=100 ; x++)
  {
    cout << lista_fibo[x] << endl;
  }
}


/// para compilar en c++  g++ -std=c++11
// -o nombre de archivo
/*(int &4)*/
