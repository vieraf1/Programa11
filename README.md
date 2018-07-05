# Programa 11

Linguagem Utilizada: C++.

Programa com menu que faz soma de números inteiros, pares e primos, calcula o fatorial de um número, retorna a quantidade de caracteres em uma palavra digitada e retorna o valor de alguma tecla digitada.

Programa Desenvolvido no DEV C++ IDE.

Código:

#include "iostream"
#include "cstdlib"
#include "conio.h"
#include "math.h"
#include "string.h"
using namespace std;

int lin = -1;

struct nume{
	int a;
	int b;
	char tecl;
	string pala;
	int tam;
	int soma;
	int pares;
	int primos;
	int fatorial;
};
struct nume me[10];

void armazena(int linha)
{
	int x, y;
	string palav;
	system("cls");
	cout << "\nDigite um número inteiro: " << endl;;
	cin >> x;
	cout << "\nDigite outro número inteiro: " << endl;
	cin >> y;
	cin.ignore();
	cout << "\nDigite uma palavra: " << endl;
	getline(cin,palav);
	
	me[linha].a = x;
	me[linha].b = y;
	me[linha].pala = palav;
}

void Tecla()
{
   lin ++;
   char tec;
   system("cls");
   cout << "\nDigite uma tecla: " << endl;
   tec = getch();
   me[lin].tecl = tec;
   
   cout << 	"\n Tecla Digitada foi: " << me[lin].tecl << endl; 
   system("pause");
}

void somar(int linha)
{
	int x, y, som = 0;
	x = me[linha].a;
	y = me[linha].b;
	
	if (x <= y) {
		for (int i = x; i <= y; i++)
		{
			som = som + i;
		}
	}
	
	else {
		for (int i = x; i >= y; i--)
		{
			som = som + i;
		}
	}
	
	me[linha].soma = som;
	
	cout << "\nSoma dos números entre " << x << " e " << y << " é " << me[linha].soma << endl;
	system("pause");
	
}

void par(int linha)
{
	int x, y, pare = 0;
	x = me[linha].a;
	y = me[linha].b;
	system("cls");
	
	if (x <= y) {
		for (int i = x; i <= y; i++)
		{
			if ((i % 2) == 0)
			{			
		      pare = pare + i;
		    }
		}
	}
	
	else {
		for (int i = x; i >= y; i--)
		{
			if ((i % 2) == 0)
			{			
			  pare = pare + i;
		    }
		}
	}
	
	me[linha].pares = pare;
	
	cout << "\n Soma dos números pares entre " << x << " e " << y << " é " << me[linha].pares << endl; 
	system("pause");
}

void primo(int linha)
{
	int x, y, pri = 0;
	int comp;
	x = me[linha].a;
	y = me[linha].b;
	system("cls");
	
	if (x <= y) {
		for (int i = x; i <= y; i++)
		{
			if ((i == 1) || (i == 2) || (i == 3))
			{			
		      pri = pri + i;
		    }
		    
		    else 
			{
		    	comp = 0;
		    	for (int j = 2; j <= i-1; j++)
		    	{
		    		if ((i % j) == 0)
		    		{
		    			comp = 1;
					}
				}
				
				if (comp == 0)
				{
					pri = pri + i;
				}
			} 
		}
	}
	
	else {
		for (int i = x; i >= y; i--)
		{
		    if ((i == 1) || (i == 2) || (i == 3))
			{			
		      pri = pri + i;
		    }
		    
		    else {
		    	comp = 0;
		    	for (int j = 2; j <= i-1; j++)
		    	{
		    		if ((i % j) == 0)
		    		{
		    			comp = 1;
					}
				}
				
				if (comp == 0)
				{
					pri = pri + i;
				}
			} 
		}
	}
	
	me[linha].primos = pri;
	
	cout << "\nSoma dos números primos entre " << x << " e " << y << " é " << me[linha].primos << endl;
	system("pause");
}

void fator(int linha)
{
	int y, fato = 1;
	y = me[linha].b;
	system("cls");
	
	if (y <= 0) {
		fato = 0;
	}
	
	else {
		for (int i = y; i > 0; i--)
		{
			fato = fato * i;
		}
	}
	
	me[linha].fatorial = fato;
	
	cout << "\nFatorial de " << y << " é " << me[linha].fatorial << endl;
	system("pause");
}

void stri(int linha)
{
	me[linha].tam = me[linha].pala.length();
	
	cout << "\nA palavra " << me[linha].pala << " tem " << me[linha].tam << " carateres "  << endl;
	system("pause");
}

int menu()
{
	     int tecla;
         system("cls");
	     cout << "\n**Tela Inicial**\n";
         cout << "\n1 - Inserir Valores";
         cout << "\n2 - Exibir Resultados";
         cout << "\n3 - Sair \n" << endl;
         cin >> tecla;
		  
return tecla;}

int menu2()
{
	     int tecla2;
         system("cls");
	     cout << "\n**Tela Inicial**\n";
         cout << "\n1 - Soma dos Números Inteiros";
         cout << "\n2 - Soma dos Números Pares";
         cout << "\n3 - Soma dos Números Primos";
         cout << "\n4 - Fatorial do Segundo Número";
         cout << "\n5 - Tamanho da Palavra";
         cout << "\n6 - Tecla Digitada";
         cout << "\n7 - Sair \n" << endl;
         cin >> tecla2;
		  
return tecla2;}

void testes(int test, int li)
{
	switch(test)
	{
		case 1:
			{
				somar(li);
				break;
			}
		case 2:
			{
				par(li);
				break;
			}
		case 3:
			{
				primo(li);
				break;
			}
		case 4:
			{
				fator(li);
				break;
			}
		case 5:
			{
				stri(li);
				break;
			}
		case 6:
			{
				Tecla();
				break;
			}
	}
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int tecla = 0, tecla2 = 0, linha = -1;
	     while (tecla != 3)
	     {
         tecla = menu();
		  
           switch(tecla)
           {
              case 1:
                   {
                        linha ++;
                        armazena(linha);
                        break;   
                   }
                 
              case 2:
                   {
                       if (linha >= 0)
                       {
                       	  while (tecla2 != 7)
                       	  {
                       	  	tecla2 = menu2();
                       	  	testes(tecla2, linha);
						  }
                          break;        
                       }                
                   }
           } 
		} 
	
return 0;}
