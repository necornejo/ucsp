/* Funcion potencia que recibe como argumentos
la base y el exponente*/
#include <iostream>
using namespace std;
//Crear el prototipo de la funcion power
int power(int base , int exponente);


int main()
{
  //Declarar las 3 variables a utilizar
  int base,exponente,total;
  cout << "Bienvenido te ayudare a calcular la potencia de un numero " << endl;
  cout << "Ingresa la base " << endl;
  cin >> base;
  cout << "Ingresa el exponente"<< endl;
  cin >> exponente;

  //Utilizar la funcion power entregando los argumentos de base y exponente
  total = power(base,exponente);
  cout << base << " elevado a " << exponente << " es igual ha " << total << endl;

  return 0;
}

//Funcionamiento de POWER
int power(int base , int exponente)
{
  int total=base;
  for( int x = 1 ; x < exponente ; x++)
  {
    total=total*base;
  }
  return total;
}
