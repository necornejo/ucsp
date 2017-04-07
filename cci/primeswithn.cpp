/* Este programa pide un valor "n" para mostrar en pantalla los primero "n" primos*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
  vector<int>prime_numbers;
  int n_range,
      corte=0,
      contador=0;
  cout << "Ingrese el numero para mostrarle los  primeros valores primos en ese rango "<< endl;
  cin >> n_range;
  corte = prime_numbers.size();
  while(corte!=n_range)
  {
    for(int number = 2 ; number <=(n_range*n_range) ; number++)
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
        corte++;
      }
      if(corte==n_range)
      {
        break;
      }


      //Luego de evaluar el numero con los divisores se reinicia el contador a "0" para que se repita el proceso con el sig number
      contador = 0;
    }

  }
  for(int x : prime_numbers){cout << x << " ";}
  cout << endl;
}
