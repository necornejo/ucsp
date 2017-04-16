/*Creanda una funcion que organize un arreglo en reversa*/
#include <iostream>
using namespace std;
void reverse(int arreglo[], int arreglo_limit);
void createArreglo(int arreglo[], int lenght);
void printArreglo(int arreglo[], int lenght);

int main()
{
  cout << "Utilizando la funcion Reversa"<< endl;
  cout << "Cuantos elementos ingresaras a la lista: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];//declarando el arreglo
  createArreglo(arreglo,lenght);//creando el arreglo
  cout << endl;
  printArreglo(arreglo,lenght);//imprimiendo el arreglo

  reverse(arreglo,lenght);// llamando a insertionSort
  printArreglo(arreglo,lenght);// imprimiendo el arreglo ordenando


}
//Inicio de funcion invertir arreglo
void reverse(int arreglo[],int arreglo_limit)
{
  int temporal;
  int limite = arreglo_limit-1;
  for(int index = 0 ; index < (arreglo_limit/2);index++)
  {
    temporal= arreglo[index];
    arreglo[index]=arreglo[limite];
    arreglo[limite]=temporal;
    --limite;
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
void createArreglo( int arreglo[],int lenght)
{
  //Ingresar los valores de un arreglo pidiendo un lenght
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }
}

//Fin funcion
