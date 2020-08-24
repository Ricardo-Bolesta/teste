#pragma once
#include <string>

using namespace std;

class ArrayString
{

public:
	ArrayString();

	void adicionar(string val);
	void remover();
	string obterValorEm(int i);
	string obterValor();
	void mostrarValor();
	void desalocar();


protected:
	int NovoTam;
	string* ptrTemp;
	string* ptrarray;
	int indice;
	int tamanho;
	void realocar();
};


