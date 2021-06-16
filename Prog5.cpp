#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
 double  raio;
   double b;
   double result;


   cout << "Digite o valor do raio: ";
   cin >> raio;

   b = 3;
   result = (4 * 3.14159 * pow(raio,b)/ 3);


   cout << "O volume da esfera e: " << result; 


}