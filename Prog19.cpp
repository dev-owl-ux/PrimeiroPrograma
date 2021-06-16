#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
       double D;
   double T;
   double V;

   cout << "Insira o valor numerico em quilometros a distancia percorrida pelo projetil: ";
   cin >> D;

   cout << "Insira em minutos o tempo que o projetil levou para efetuar a distancia percorrida: ";
   cin >> T;


   V = (D* 1000) / (T * 60);

   cout << "O valor da velocidade do projetil em metros por segundo e: " << V;


}