/*Utilizando punteros para intercambiar el valor de 2 numeros*/
/*Este programa intercambia el valor de dos numeros utilizando
una funcion que recibe argumentos por referencia*/

#include <iostream>
using namespace std;

//prototipo con paso de referencia
void changeNumbers(int a , int b);
int main()
{
  //Declaracion e ingreso de datos para ambos numeros
  int number_a , number_b;
  cout << "Intercambiaremos 2 numeros " << endl;
  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  //uso de la funcion intercambio con punteros
  int *ptrA = &number_a;
  int *ptrB = &number_b;
  changeNumbers(*ptrA, *ptrB);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}

//funcion intercambio con punteros
void changeNumbers(int *r, int *s)
  {
     int temp = *r;
     *r = *s;
     *s = temp;
     return;
  }
