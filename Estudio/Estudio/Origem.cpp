#include <iostream>
#include "TV.h"
#include <fstream>
using namespace std;

int main()
{
	//1. Implemente um c�digo que
	//a.Declare uma vari�vel do tipo ponteiro para inteiro; FOI
	//b.Declare uma vari�vel do tipo inteiro; FOI
	//c.Inicialize a vari�vel do tipo inteiro com o valor 0; foi
	//d.Atribua o valor 10 a vari�vel do tipo inteiro, por meio da vari�vel do tipo
	//	ponteiro.
	//e.Mostre na tela o valor da vari�vel inteira utilizando ela pr�pria e a vari�vel
	//ponteiro.

	//quest�o 1 
	//a
		int *ponteiro;
	//b
		int ponteiro;
	//c
		int valor = 0; 
	
	//d
	
	//e
	

	//quest�o 2
		//Declare a Classe Jogador
		//	a.Declare dois atributos privados inteiros identificados como vida e energia.
		//	b.Inicialize por meio do construtor ambos atributos.
		//  c.Declare m�todos para definir e obter o valor de cada atributo.

		class Jogador;
		{
		public:
			Jogador();
			~Jogador();
			void(int vida);
			void(int energia);


		protected:
			int  vida, energia;
		}
	//quest�o 3
			//3. Implemente um programa que use a classe jogador declarada.
			//a.Defina os valores para os atributos da classe por meio do construtor;
			//b.Mostre os valores dos atributos definidos
			//c.Atualize os valores dos atributos por meio dos m�todos
			//d.Mostre os valores dos atributos definidos.

	
	//quest�o 4
		   // Implemente um programa que receba como entrada somente n�meros inteiros
		  // positivos e imprima apenas os que estejam no intervalo de 5 a 15. O Programa deve
		 //terminar quando for digitado o valor 0

		int numero;
		cout << "Informe o numero entre 5 e 15 ou 0 para sair: ";
		cin >> numero;
		if (numero > 5 && numero < 15);
		cout << ;
		else (numero = = 0)
			cout << "finalizado";

	// quest�o 5

		//5. Elabore um programa que :
		//a.declare um vetor de inteiros de 10 posi��es,
		//b.Preencha o mesmo com valores entre 20 e 50.
		//c.Imprima o resultado da soma de todos os 10 valores preenchidos

		//a 
		int  vetor[10];


	system("pause");
	return 0;
}
