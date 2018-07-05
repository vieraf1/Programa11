#include "iostream"
#include "cstdlib"
#include "conio.h"
#include "math.h"
#include "iomanip"
using namespace std;
struct conta
{ double valor, final;
  int dias; 
};

struct conta ser[10];

double lerConta()
{
 double a = 0;
 
 while(a <= 0)
 {
 system("cls");
 cout << "\nBem Vindo ao programa do cálculo da conta em atraso";
 cout << "\nInsira o valor da prestação em atraso: "; cin >> a;  
 } 
 
 return a;      
}

int lerDias()
{
 int a = -1;
 
 while(a < 0)
 {
 system("cls");
 cout << "\nInsira a quantidade de dias da conta em atraso: "; cin >> a;  
 } 
 
 return a;      
}

void Cal(int linha)
{
  double d, c, a, b;
  for (int i = 0; i <= linha; i++)
  {
  a = ser[i].valor;
  b = ser[i].dias;
  c = a / 100;  
  d = a + (2 * c) + (b * (c / 30));
  
  ser[i].final = d; 
  }
}

void armazenar(int linha)
{
     ser[linha].valor = lerConta();
     ser[linha].dias = lerDias();
}

void exibir (int linha)
{
      system("cls");
      for (int i = 0; i <= linha; i++)
      {
      cout << fixed << setprecision(2);
      cout << "\nValor Original da Prestação: " << ser[i].valor  << "  -  Quantidade de dias atrasados: " << ser[i].dias << "  -  Valor Final da Prestação: " << ser[i].final;
      }
      cout << endl;
      system("pause");
}

int menu()
{
	     int tecla;
         system("cls");
         cout << "\n**Cálculo das raízes de uma equação do segundo grau**\n";
	     cout << "\n**Tela Inicial**\n";
         cout << "\n1 - Inserir Valores";
         cout << "\n2 - Realizar Cálculos";
         cout << "\n3 - Exibir Resultados";
         cout << "\n4 - Sair \n" << endl;
         cin >> tecla;
		  
return tecla;}

int main() {

   setlocale(LC_ALL,"Portuguese");
	     int tecla = 0, linha = -1;
	     while (tecla != 4)
	     {
         tecla = menu();
		  
           switch(tecla)
           {
              case 1:
                   {
                        linha ++;
                        armazenar(linha);
                        break;   
                   }
                 
              case 2:
                   {
                       if (linha >= 0)
                       {
                          Cal(linha);  
                          break;        
                       }                
                   }
            
              case 3:
                   {
                      if (linha >= 0)
                      {
                        exibir(linha);
                        break;          
                      }        
                   }
           } 
		} 
return 0; 
}
