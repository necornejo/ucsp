#include <iostream>
using namespace std;
int main()
{
  int lista_5[5];
  int input_number;
  int num_mayor = 0;
  for(int x = 0; x < 5 ; x++)
  {
    cin >> input_number;
    lista_5[x]=input_number;
    if(num_mayor < lista_5[x])
    {
      num_mayor = lista_5[x];
    }


  }
 cout << "El numero mayor ingresado fue "  << num_mayor << endl;
 return 0;
}
