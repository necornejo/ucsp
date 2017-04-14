/*Este programa verifica si un numero es par o impar
-----------se detiene cuando se ingresa el valor -1*/

#include <iostream>
using namespace std;

int main()
{
  //declara la variable a comprobar par o impar
  long int number_input;
  cout << "Bienvenido ingresa diversos numeros para comprobar si es par o impar " << endl;
  cout << "Para Salir ingresa -1" << endl;
  //Bool declarado para iterar
  bool stop = false;
  while ( !stop )
  {
    cin >> number_input;

    //condicion de corte
    if( number_input == -1)
    {
      cout << "FIN";
      stop = true;
    }
    //Evaluacion para numero par
    if(number_input % 2 == 0 )
    {
      cout << number_input << " Es par " << endl;
    }
    //Si no es par es impar 
    else
    {
      cout << number_input << " Es impar " << endl;
    }

  }
  return 0;

}
