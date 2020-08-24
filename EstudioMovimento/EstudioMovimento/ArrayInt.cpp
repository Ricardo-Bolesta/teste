#include "ArrayInt.h"
#include <cstdio>
#include <iostream>
using namespace std;

ArrayInt::ArrayInt()
{
	 ptrarray = new int [5];
	 ptrTemp = nullptr;
	 indice = 0;
	 tamanho = NovoTam = 5;
	 
	 for (int i = 0; i < tamanho; i++) {
		 ptrarray[i] = NULL;
	 }
}

void ArrayInt::adicionar(int val)
{
	if (indice >= tamanho) {
		realocar();
	}
    
	ptrarray[indice] = val;

	indice++;
}

void ArrayInt::remover()
{
	indice--;
	ptrarray[indice] = NULL;
}

int ArrayInt::obterValorEm(int i)
{
	if (i < tamanho && i>= 0) {
		return ptrarray[i];
	}
	else {
		cout << "erro\n" ;

		return NULL;
	}
}

int ArrayInt::obterValor()
{
	return ptrarray[indice -1];
}

void ArrayInt::mostrarValor()
{
	for (int i = 0; i < tamanho; i++) {
		cout << ptrarray[i] << endl;
	}
}

void ArrayInt::desalocar()
{
	delete[] ptrarray;
}

void ArrayInt::realocar()
{
	NovoTam += 5;

	ptrTemp = new int[tamanho];
	for (int i = 0; i < tamanho; i++) {
		ptrTemp[i] = ptrarray[i];
	}

	ptrarray = new int[NovoTam];
	for (int i = 0; i < tamanho; i++) {

		 ptrarray[i] = ptrTemp[i];
	}

	for (int i = tamanho; i < NovoTam; i++) {
		ptrarray[i] = NULL;
	}

	tamanho = NovoTam;

	delete[] ptrTemp;
}
