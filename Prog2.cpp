#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() 
{
 int b;
  int h;
  int result;

   cout << "Digite o valor da base: ";
   cin >> b;

    cout << "Digite o valor da altura: ";
    cin >> h;

   result = b*h/2;
    cout << "O valor da area do triangulo e: " << result;

}