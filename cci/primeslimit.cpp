/* Este programa busca los numeros primos entre 1 y 100 utilizando vectores
ademas crea un vector que los almacena*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
  /*Declaramos una Vector que contendra a los numeros primos que se encuentren
  luego declaramos una variable contador para que haga un conteo de los divisores*/
  vector<int>prime_numbers;
  int limit;//limite ingresado por el usuario
  int contador=0;
  //Fin declaracion
  cin >> limit;
  /*Inicio de rango de numeros a evaluar
  OJO por conveniencia se inicializa en 2*/
  for(int number = 2 ; number <=limit ; number++)
  {
    /*El numero se empezara a evaluar con modulo su numero de divisores
    entre un rango que inicia en 1 y termina en el valor del  numero de dicha iteracion
    con un incremento de uno*/
    for(int divisor = 1 ; divisor <= number ; divisor++)
    {
      if(number%divisor==0)contador++;//Si se haya un divisor se incrementa en 1 el contador
    }
    //Si el contador es igual exactamente a 2 divisores el numero sera agregado a la lista prime_numbers
    if(contador==2)
    {
      prime_numbers.push_back(number);

    }
    //Luego de evaluar el numero con los divisores se reinicia el contador a "0" para que se repita el proceso con el sig number
    contador = 0;
  }
  /*Aqui se imprime los numeros primos encontrados*/
  for(int x : prime_numbers){cout << x << " ";}

  return 0;
}
