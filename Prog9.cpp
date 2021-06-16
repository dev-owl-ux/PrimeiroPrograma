#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

    double vb;
  double vn;
  double vv;
  double nte;
  double percvb;
  double percvn;
  double percvv;


   cout << "Digite a quantidade de votos brancos: ";
   cin >> vb;
  
   cout << "Digite a quantidade de votos nulos: ";
   cin >> vn;

   cout << "Digite a quantidade de votos validos: ";
   cin >> vv;

   nte = vb + vn + vv;

   percvb = (vb * 100) / nte;
   percvn = (vn * 100) / nte;
   percvv = (vv * 100) / nte;


   cout << " O numero total de eleitores e: " << nte;
   cout << "\n A porcentagem de votos brancos e: " << percvb;
   cout << "\n A porcentagem de votos nulos e: " << percvn;
   cout << "\n A porcentagem de votos válidos e: " << percvv;

}