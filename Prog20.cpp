#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
 int a;
 int b;
 int div;
 int mult;
 int som;
 int sub;

 cout << "Insira o valor de 'a': ";
 cin >> a;

 cout << "Insira o valor de 'b'";
 cin >> b;

 div = a/b;
 mult = a*b;
 som = a+b;
 sub = a-b;

 cout <<  "Valor somado: "  << som ;
 cout << "\nValor subtraido: " <<sub;
 cout << "\nValor multiplicado: " << mult;
 cout << "\nValor dividido: " << div;


}