#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
       double n1;
   double n2;
   double n3;
   double a;
   double b;
   double nf;

   cout << "Digite sua n1: ";
   cin >> n1;

   cout << "Digite sua n2: ";
   cin >> n2;

   cout << "Digite sua n3: ";
   cin >> n3;


  a = n1 * 2 + n2 * 3 + n3 * 5;
  b = 2 + 3 + 5;
  nf = a/b;


  cout << "Sua nota final e: " << nf;

}