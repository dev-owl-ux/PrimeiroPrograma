#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

       double i;
   double m;
   double d;
   double x;
 
   cout << "Digite a sua idade: ";
   cin >> i;
   cout << "Digite quantos meses ja passaram desde o seu ultimo aniversario: ";
   cin >> m;

   x = m * 30;
   d = i * 365 + x;

   cout << "Voce possui: ";
   cout << d << " dias de vida";

}