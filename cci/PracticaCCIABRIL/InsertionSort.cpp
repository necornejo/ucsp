/*Este programa implementa el algoritmo insertion con una funcion*/
#include <iostream>
using namespace std;
//Prototipos de las funciones que se utilizaran
void insertionSort(int arreglo[] , int lenght);
void createArreglo(int arreglo[], int lenght);
void printArreglo(int arreglo[], int lenght);
int main()
{
  cout << "Utilizando insertionSort"<< endl;
  cout << "Cuantos elementos ingresaras a la lista: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];//declarando el arreglo
  createArreglo(arreglo,lenght);//creando el arreglo
  cout << endl;
  printArreglo(arreglo,lenght);//imprimiendo el arreglo

  insertionSort(arreglo,lenght);// llamando a insertionSort
  printArreglo(arreglo,lenght);// imprimiendo el arreglo ordenando




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
void insertionSort( int arreglo[], int lenght)
{

  for( int  i = 1 ; i < lenght ; i++)
  {
    int j = i;
    while ( j > 0 && arreglo[j-1] > arreglo [j])
    {
      int temp = arreglo[j];
      arreglo[j]=arreglo[j-1];
      arreglo[j-1]=temp;
      j--;
    }
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
