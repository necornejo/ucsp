#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  //Declarar un array con los string respectivos de 0 a 9
  string numbers[10]= {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
  int num_in;
  cout << "Ingresa un numero entre 0 y 9 " << endl;
  cout << "Lo transformare a letras por ti " << endl;
  bool corte = false;
  while(!corte)
{
  //Pedir un numero, si esta en el rango del array muestra su conversion a string
  cin>> num_in;
  if (num_in <= 9 && num_in>=0)
  {
    cout << numbers[num_in]<< endl;
  }
  //Condicion para parar el programa
  else if (num_in == -1)
  {
    cout << "FIN";
    corte = true;
  }
  //Si no se ingresa un numero dentro del rango mostrar un error
  else
  {
    cout << "No conozco ese numero ingresa otro " << endl;
  }
}
  return 0;
}
