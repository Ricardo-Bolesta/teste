#include "ArrayFloat.h"
#include <cstdio>
#include <iostream>

using namespace std;

ArrayFloat::ArrayFloat()
{
	ptrarray = new float[5];
	ptrTemp = nullptr;
	indice = 0;
	tamanho = NovoTam = 5;

	for (int i = 0; i < tamanho; i++) {
		ptrarray[i] = NULL;
	}
}

void ArrayFloat::adicionar(float val)
{
	if (indice >= tamanho) {
		realocar();
	}

	ptrarray[indice] = val;

	indice++;
}

void ArrayFloat::remover()
{
	indice--;
	ptrarray[indice] = NULL;
}

float ArrayFloat::obterValorEm(int i)
{
	if (i < tamanho && i >= 0) {
		return ptrarray[i];
	}
	else {
		cout << "erro\n";

		return NULL;
	}
}

float ArrayFloat::obterValor()
{
	return ptrarray[indice - 1];
}

void ArrayFloat::mostrarValor()
{

	for (int i = 0; i < tamanho; i++) {
		cout << ptrarray[i] << endl;
	}
}

void ArrayFloat::desalocar()
{
	delete[] ptrarray;
}

void ArrayFloat::realocar()
{
	NovoTam += 5;

	ptrTemp = new float[tamanho];
	for (int i = 0; i < tamanho; i++) {
		ptrTemp[i] = ptrarray[i];
	}

	ptrarray = new float[NovoTam];
	for (int i = 0; i < tamanho; i++) {

		ptrarray[i] = ptrTemp[i];
	}

	for (int i = tamanho; i < NovoTam; i++) {
		ptrarray[i] = NULL;
	}

	tamanho = NovoTam;

	delete[] ptrTemp;
}
