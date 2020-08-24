#pragma once
class ArrayInt
{

public:
	ArrayInt();
	void adicionar(int val);
	void remover();
	int obterValorEm(int i);
	int obterValor();
	void mostrarValor();
	void desalocar();


protected:
	int NovoTam;
	int* ptrTemp;
	int* ptrarray;
	int indice;
	int tamanho;
	void realocar();
};

