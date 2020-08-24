#include "ArrayString.h"
#include <cstdio>
#include <iostream>

using namespace std;

ArrayString::ArrayString()
{
	ptrarray = new string[5];
	ptrTemp = nullptr;
	indice = 0;
	tamanho = NovoTam = 5;

	for (int i = 0; i < tamanho; i++) {
		ptrarray[i] = "NULL";
	}
}

void ArrayString::adicionar(string val)
{
	if (indice >= tamanho) {
		realocar();
	}

	ptrarray[indice] = val;

	indice++;
}

void ArrayString::remover()
{
	indice--;
	ptrarray[indice] = "NULL";
}

string ArrayString::obterValorEm(int i)
{
	if (i < tamanho && i >= 0) {
		return ptrarray[i];
	}
	else {
		cout << "erro\n";

		return NULL;
	}
}

string ArrayString::obterValor()
{

	return ptrarray[indice - 1];
}

void ArrayString::mostrarValor()
{
	for (int i = 0; i < tamanho; i++) {
		cout << ptrarray[i] << endl;
	}
}

void ArrayString::desalocar()
{
	delete[] ptrarray;
}

void ArrayString::realocar()
{
	NovoTam += 5;

	ptrTemp = new string[tamanho];
	for (int i = 0; i < tamanho; i++) {
		ptrTemp[i] = ptrarray[i];
	}

	ptrarray = new string[NovoTam];
	for (int i = 0; i < tamanho; i++) {

		ptrarray[i] = ptrTemp[i];
	}

	for (int i = tamanho; i < NovoTam; i++) {
		ptrarray[i] = "NULL";
	}

	tamanho = NovoTam;

	delete[] ptrTemp;
}