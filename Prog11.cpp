#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
   double ccn;
   double scf;
   double pd;
   double pi;
   double cfc;
 
   cout << "Digite o valor da soma do custo de fabrica: ";
   cin >> scf;

   pd = scf * 0.28;
   pi = scf * 0.45;
   cfc = scf + pd + pi;


   cout << "O custo de fabrica e: " << scf;
   cout << "\nO custo final do consumidor e: " << cfc;


}