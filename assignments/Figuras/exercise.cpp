#include <iostream>
#include "Circuito.hpp"
using namespace std;


int main() 
{
  int x = 5;
  int& refX = x
  cout << "Valor de x: " << x << "Valor referencia de x: " << refX << endl;
  refX = 10
  cout << "Valor de x: " << x << "Valor referencia de x: " << refX << endl;
  cout << "Direccion de memoria: " << &x << "Direccion de refX: " << &refX << endl;
  //Apuntadores
  int* ptrX;
  ptrX = &x;
  cout << "Lo que guarda el ptrX: " << ptrX << "El valor al que apunta: " << *ptrX <<endl;
  int* ptrDin = new int(20)
  cout << "Lo que guarda el ptrDin: " << ptrDin << "El valor al que apunta: " << *ptrDin << endl;
  delete ptrDin;
  cout << "Lo que guarda el ptrDin: " << ptrDin << "El valor al que apunta: " << *ptrDin << endl;
  return 0;
}
