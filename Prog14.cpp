#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
       double x1;
   double x2;
   double y1;
   double y2;
   double c1;
   double c2;
   double b;
   double dist;
 

   cout << "Digite o valor do  X1: ";
   cin >> x1;

   cout << "Digite o valor do  X2: ";
   cin >> x2;

  

   cout << "Digite o valor do Y1: ";
   cin >> y1;

   cout << "Digite o valor do Y2: ";
   cin >> y2;

   c1 = x2-x1;
   c2 = y2-y1;
   b = 2;
   dist = sqrt (pow(c1,b)+ pow(c2,b));

   cout << "A distancia entre os dois pontos e de: " << dist;


}