#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

      int c; 
    int f;


    cout << "Digite a temperatura em fahrenheit: ";
    cin >> f;

    c = ((f - 32) * 5) / 9;

    cout << "Convertendo para celsius o resultado e: " << c;
    
}