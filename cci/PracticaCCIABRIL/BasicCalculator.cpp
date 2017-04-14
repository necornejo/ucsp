/*Este es un programa que simula las operaciones de una calculadora,
El proceso del programa es el siguiente
1. Pide 2 numeros al usuario
2. Pide un operador como "+ , - , *,/"
3. Muestra en pantalla los numeros ingresados el operador seleccionado
4. Muestra el resultado.
*/
#include <iostream>
using namespace std;

int main()
{
  char sum = '+',
       minus = '-',
       mult = '*',
       divi = '/';
  double numa , numb,resultado;
  char opera;

  cout << "Bienvenido !! " << endl;
  cout << "Soy una calculadora basica y te ayudare a hacer algunas operaciones " << endl;
  cout << "Ingresa 2 numeros seguidos de un operador" << endl;
  cout << "*---------------------*" << endl;
  cout << sum << "Adicion" << endl;
  cout << minus << "Resta" << endl;
  cout << mult << "Multiplicacion" << endl;
  cout << divi << "Division" << endl;
  cout << "*---------------------*" << endl;
  cout << endl << endl;
  cout << "Empezemos !! " << endl;
  cout << "Ingresa el Primer Numero " << endl;
  cin >> numa ;
  cout << "Ingresa el Segundo Numero " << endl;
  cin >> numb ;

  bool cortador = true;
  while (cortador)
  {
    cout << "Ingresa el operador";
    cin >> opera;
    if(opera=='+' || opera == '-' || opera == '*' || opera == '/')
    {
      cortador = false;
    }
    else
    {
      cout << endl << endl << "Ingresa un operador correcto" << endl;
    }
  }
  if (opera == '+'){resultado = numa + numb;}
  else if (opera == '-'){resultado = numa - numb;}
  else if (opera == '*'){resultado = numa * numb;}
  else if (opera == '/'){resultado = numa / numb;}

  cout << "Los valores ingresados fueron " << endl;
  cout << numa << "    " << numb <<endl <<  "El operador escogido fue " << opera << endl;
  cout << "El resultado es " << endl;
  cout << resultado << endl;
  return 0;

}
