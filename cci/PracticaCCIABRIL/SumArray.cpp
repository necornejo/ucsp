//Este programa suma los valores de un arreglo de 5 elementos
#include <iostream>

using namespace std;

int sumArray(int arreglo[],int lenght);
void createArreglo( int arreglo[] , int lenght);
void printArreglo( int arreglo[] , int lenght);
int main()
{
  cout << "Ingrese el numero de valores que va ingresar ";
  int lenght ; cin >> lenght;
  int lista[lenght];
  createArreglo(lista,lenght);
  printArreglo(lista,lenght);

  int sum = sumArray(lista,lenght);
  cout << "La suma de los elementos es " << sum << endl;
}
int sumArray(int arreglo[], int lenght)
{
  // crear un acumulador de la suma
  int total = 0;
  for (int x = 0 ; x < lenght ; x++)
  {
    total = total + arreglo[x];// iterar acumulando la suma en total
  }
  return total;
}

void createArreglo( int arreglo[],int lenght)
{
  //Ingresar los valores de un arreglo pidiendo un lenght
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }
}
void printArreglo(int arreglo[],int lenght)
{
  //imprime los valores del arreglo
  cout << "La lista es: ";
  for(int x = 0 ; x < lenght ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout << endl;
}
