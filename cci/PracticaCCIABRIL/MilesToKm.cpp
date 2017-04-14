/*Este programa convierte de millas a kilometros
se solicita al usuario las "Millas" a convertir*/
#include <iostream>
using namespace std;

int main()
{
  //Declarar la constante de conversion de millas a km
  const double km_per_milla = 1.60934;
  //Declarar e ingresar las millas a convertir
  double millas_input;
  cout << "Ingresa las millas que deseas convertir"<< endl;
  cin >> millas_input;
  //Calcular y mostrar los datos de conversion
  cout << "La cantidad en millas ingresadas fue " << millas_input << endl;
  cout << "Lo que en kilometros equivale ha " << millas_input*km_per_milla << endl;
  return 0;
}
