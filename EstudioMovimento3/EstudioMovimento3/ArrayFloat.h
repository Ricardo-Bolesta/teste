#pragma once

using namespace std;

class ArrayFloat
{

public:
	ArrayFloat();

	void adicionar(float val);
	void remover();
	float obterValorEm(int i);
	float obterValor();
	void mostrarValor();
	void desalocar();


protected:
	int NovoTam;
	float* ptrTemp;
	float* ptrarray;
	int indice;
	int tamanho;
	void realocar();
};



