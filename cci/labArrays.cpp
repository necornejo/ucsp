#include <iostream>
using namespace std;

int main()
{
  /*Declarar un arreglo de 5 elementos
  */
  int lista_5[5];
  int val_elemento;
  for(int i = 0 ; i <5;i++)
  {
    cin >> val_elemento;
    lista_5[i]=val_elemento;
  }
  for(int i = 0; i < 5 ; i++)
  {
    cout << i+1 << "-------"<< lista_5[i] << endl;

  }
  /*arranca intercambio*/

  int temporal_5[5];
  int contador=0;
  for (int i=0; i < 5 ; i++)
  {
    temporal_5[i]=lista_5[i];
  }

  for(int i = 4 ; i >= 0 ; i--)
  {
    lista_5[contador]=temporal_5[i];
    contador+=1;

  }
  for(int i = 0; i < 5 ; i++)
  {
    cout << i+1 << "-------"<< lista_5[i] << endl;

  }

  return 0;
}
