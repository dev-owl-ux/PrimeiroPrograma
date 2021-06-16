#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
       double grau;
   double pi;
   double rad;


   cout << "Digite o valor em graus: ";
   cin >> grau;

   pi = 3.14159;
   rad = grau * pi/180;

   cout << "O grau " << grau << " convertido para radiano e:" << rad;
   

}