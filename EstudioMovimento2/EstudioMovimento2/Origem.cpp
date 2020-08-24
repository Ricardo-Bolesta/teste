#include <iostream>
#include <string>
#include <cstdio>
#include "ArrayString.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");

	ArrayString array;

	array.adicionar("1");
	array.adicionar("2");
	array.adicionar("3");
	array.adicionar("4");
	array.adicionar("5");
	array.adicionar("6");
	array.adicionar("7");
	array.adicionar("8");

	array.remover();

	cout << "Representa��o do array:\n";
	array.mostrarValor();

	cout << "|-------------------------------------------------|\n";

	array.adicionar("8");
	array.adicionar("9");
	array.adicionar("10");
	array.adicionar("11");

	array.remover();

	cout << "Representa��o do array:\n";
	array.mostrarValor();

	cout << "|-------------------------------------------------|\n";
	cout << "Representa��o do ultimo valor do array: " << array.obterValor() << endl;
	cout << "Representa��o do valor do array na posi��o 3: " << array.obterValorEm(3) << endl;

	array.desalocar();

	cout << "|-------------------------------------------------|\n";




	system("pause");
}