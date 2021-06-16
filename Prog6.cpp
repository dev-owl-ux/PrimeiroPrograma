#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

     int comp;
    int larg;
    int alt;
    int vol;
  
    cout << "Digite o valor do comprimento: ";
    cin >> comp;

    cout << "Digite o valor da largura: ";
    cin >> larg;

    cout << "Digite o valor da altura: ";
     cin >> alt;

    vol = comp * larg * alt;

    cout << "O volume da caixa retangular e: " <<vol;

}