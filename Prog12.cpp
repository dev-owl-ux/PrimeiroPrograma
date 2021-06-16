#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double sf;
   double cf;
   double vc;
   double qcv;
   double por;
   double vve;
   double saldf;
  

   cout << "Digite o preco do carro: ";
   cin >> vc;

   cout << "Digite o numero de carros vendidos: ";
   cin >> qcv;

   sf = 1500;
   cf = 300 * qcv;
   vve = vc * qcv;
   por = 0.05 * vve;
   saldf = sf + cf + por + vve;

   cout << " A quantidade de carros vendidos foi: " << qcv;
   cout << "\n O valor total das vendas efetuadas foi: " <<vve;
   cout << "\n O salario fixo do funcionario foi: " << sf;
   cout << "\n A comissao por 5% do valor das vendas foi: " <<por;
   cout << "\n A comissao fixa por carro vendido foi: " <<cf;
   cout << "\n O salario final do vendedor foi: " << saldf;


}