/*
1 Encontrar el area de un cuadrado , de un circulo y un rectangulo
2 Un programa que intercambie 2 variable A >> B , B >> A
3 Un program que solicite 2 numeros e indique cual es mayor y menor
*/
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  //1
  // Circulo
  double radius,
         area_circle;
  cout << "Ingrese el radio del circulo" << endl;
  cin >> radius;
  area_circle = pow(radius,2);
  cout << "El area del circulo es " << area_circle << endl;
  // cuadrado
  double lado,
         area_cuadrado;
  cout << "Ingrese el lado";
  cin >> lado;
  area_cuadrado = lado * lado;
  cout << "El area del cuadrado es " << area_cuadrado << endl;
  //rectangulo
  double base,
         altura,
         area_rectangulo;
  cout << "Ingrese la base del rectangulo";
  cin >> base;
  cout << "Ingrese la altura del rectangulo";
  cin >> altura;
  area_rectangulo = base * altura;
  cout << "El area del rectangulo es " << area_rectangulo;

  //2 Se declara 2 variables que el usuario ingresara y una tercera
  //para almacenar temporalmente e intercambiar.
  int value_a, value_b,temp;
  cin >> value_a;
  cin >> value_b;

  cout << "El valor ingresado para A " << value_a << endl;
  cout << "El valor ingresado para B " << value_b << endl;
  //Intercambio
  temp = value_a;
  value_a = value_b;
  value_b = temp;
  cout << "Ahora A es " << value_a << endl;
  cout << "Ahora B es " << value_b << endl;

  // 3  Se declara 2 variables para que ingrese el user
  int numa , numb;
  cout << "Ingrese 2 numeros" << endl;
  cin >> numa;
  cin >> numb;
  //Inicio de comparacion
  if (numa>numb)
  {
    cout << numa << " Es mayor a " << numb << endl;
  }
  else if(numa==numb)
  {
    cout << "Ambos numeros son iguales " << endl;
  }
  else
  {
    cout << numb << " Es mayor a " << numa << endl;
  }
  return 0;
  //4 Intercambiar el valor de 2 variables sin una 3era temporal
  int num_a, num_b;
  cin >> num_a;
  cin >> num_b;
  num_a = num_b + num_a; // se almacena en num_a la suma de ambos numeros
  num_b = num_a - num_b; // num_a que contiene la suma de ambos numeros se resta num_b para que este tenga el valor de num_a
  num_a = num_a - num_b; // a la suma

  // El numero mayor en 3 numeros
  int val_a,
      val_b,
      val_c;
  cin >> val_a;
  cin >> val_b;
  cin >> val_c;

  if(val_a> val_b)
  {
    if(val_b > val_c){
    cout << val_a << " es el mayor"

    }
    cout << val_a << " es el mayor"
  }
}
