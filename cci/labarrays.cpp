/* Este documento tiene diversas funciones donde se utilizan arreglos y tipos de datos como const
etc.*/
#include <iostream>
using namespace std;
//Inicio funcion suma de un arreglo
int sum(const int arreglo[], const int length_arreglo)
{
  int sum = 0 ;
  for (int i = 0 ; i < length_arreglo ; sum += arreglo[i++]);
  return sum;
}
//fin funcion suma de arreglo


//Inicio funcion promedio de un arreglo
int average(int sum_arreglo, int length_arreglo)
{
  int average=sum_arreglo/length_arreglo;
  return average;
}
//Fin funcion promedio de un arreglo

//Inicio de funcion invertir arreglo
int reverse(int arreglo[],int arreglo_limit)
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
//Fin funcion Invertir

}

int main()
{

  int arreglo_limit;cin >> arreglo_limit;
  int arreglo_example[arreglo_limit];
  for(int input_number = 0 ; input_number < arreglo_limit ; input_number++)
  {
    cin >> arreglo_example[input_number];
  }
  cout << "La suma es " << sum(arreglo_example,arreglo_limit) << endl;
  int sum_arreglo = sum(arreglo_example,arreglo_limit);
  cout << "El promedio es " << average(sum_arreglo,arreglo_limit) << endl;
  reverse(arreglo_example,arreglo_limit);
  for( int x = 0; x < arreglo_limit; x++)
  {
    cout << arreglo_example[x] << " ";
  }
}
