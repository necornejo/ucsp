/*Este programa implementa el algoritmo insertion con una funcion*/
#include <iostream>
using namespace std;

void mergeSort(int arreglo[] , int lenght);
void createArreglo(int arreglo[], int lenght);
void printArreglo(int arreglo[], int lenght);
int main()
{
  cout << "Utilizando insertionSort"<< endl;
  cout << "Cuantos elementos ingresaras a la lista: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];
  createArreglo(arreglo,lenght);
  cout << endl;
  printArreglo(arreglo,lenght);

  mergeSort(arreglo,lenght);
  printArreglo(arreglo,lenght);




}

void createArreglo( int arreglo[],int lenght)
{

  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }


}
void mergeSort( int arreglo[], int lenght)
{


}

void printArreglo(int arreglo[],int lenght)
{
  cout << "La lista es: ";
  for(int x = 0 ; x < lenght ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout << endl;
}
