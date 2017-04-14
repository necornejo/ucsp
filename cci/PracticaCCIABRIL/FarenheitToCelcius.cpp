/* Este programa convierte grados F ha C
se muestra una tabla de conversion de algunos valores*/

#include <iostream>
using namespace std;

int main()
{
  //Crear una tabla con valores desde 0 grados Farenheit hasta 300 en saltos de 20
  cout  << "Farenheit ----> Celcius"<< endl;
  for (double f = 0 ; f <= 300 ; f+=20)
  {
    //En cada iteracion f es farenheit y se hace la conversion a celcius mediante la formula
    //C = farenheit - 32 * (5/9)
    cout << f << "---->" << (f - 32)*5/9 << endl;
  }
  return 0;
}
