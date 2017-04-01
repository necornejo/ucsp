//Este programa suma los valores de un arreglo de 5 elementos
#include <iostream>
using namespace std;
int main()
{
  int lista_5[5];
  int input_number;
  int suma_total_lista=0;
  for(int x = 0; x < 5 ; x++)
  {
    cin >> input_number;
    lista_5[x]=input_number;
    suma_total_lista = suma_total_lista+ lista_5[x];

  }
 cout << "Suma Total de los 5 valores ingresados " << suma_total_lista << endl;
 return 0;
}
