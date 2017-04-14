/*Este programa intercambia el valor de dos numeros utilizando
una funcion que recibe argumentos por referencia*/

#include <iostream>
using namespace std;

//prototipo con paso de referencia
void changeNumbers(int &a , int &b);
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

  //uso de la funcion intercambio
  changeNumbers(number_a, number_b);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}

//funcion intercambio
void changeNumbers(int &a , int &b)
{
  int temporal = a;
  a = b;
  b = temporal;
}
