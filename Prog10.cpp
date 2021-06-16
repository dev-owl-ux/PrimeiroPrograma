#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
     double sm;
   double pr;
   double ns;

   cout << "Digite o salario mensal: ";
   cin >> sm;

   cout << "Digite a porcentagem do reajuste: ";
   cin >> pr;

   ns = sm + (sm * pr/100);


   cout << "O valor do novo salario e: " << ns;

}