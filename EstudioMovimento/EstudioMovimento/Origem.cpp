#include <iostream>
#include <string>
#include <cstdio>
#include "ArrayInt.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");

	ArrayInt array;

	array.adicionar(1);
	array.adicionar(2);
	array.adicionar(3);
	array.adicionar(4);
	array.adicionar(5);
	array.adicionar(6);
	array.adicionar(7);
	array.adicionar(8);

	array.remover();

	cout << "Representação do array:\n";
	array.mostrarValor();

	cout << "|-------------------------------------------------|\n";

	array.adicionar(8);
	array.adicionar(9);
	array.adicionar(10);
	array.adicionar(11);

	array.remover();

	cout << "Representação do array:\n";
	array.mostrarValor();

	cout << "|-------------------------------------------------|\n";
	cout << "Representação do ultimo valor do array: " << array.obterValor() << endl;
	cout << "Representação do valor do array na posição 3: " << array.obterValorEm(3) << endl;

	array.desalocar();

	cout << "|-------------------------------------------------|\n";



	//int* jogo, * ptrTemp;
	//int TamArrey = 2;
	//int NovoTam = 4;

	//jogo = new int[TamArrey];
	//jogo[0] = 1;
	//jogo[1] = 2;
	//
	//for (int i = 0; i < TamArrey; i++) {
	//	cout << jogo[i] << endl;
	//}
	//cout << "|-------------------------------------------------|\n";
	//ptrTemp = new int[TamArrey];
	//for (int i = 0; i < TamArrey; i++) {
	//	ptrTemp [i] = jogo[i];
	//}

	//jogo = new int[NovoTam];
	//for (int i = 0; i < TamArrey; i++) {
	//	
	//	jogo[i] = ptrTemp[i];
	//}
	//for (int i = TamArrey; i < NovoTam; i++) {
	//	jogo[i] = NULL;
	//}
	//for (int i = 0; i < NovoTam; i++) {
	//	cout << jogo[i] << endl;
	//}





	//delete[]jogo;
	//delete[]ptrTemp;

	
	/*jogo = (int*)calloc(2, sizeof(int));

	cout << "informe os numeros do vetor\n";
	for (int i = 0; i < 2; i++) {
		cin >> jogo[i];

	}

	cout << "Impressao do vetor";
	for (int i = 0; i < 2; i++) {
		if (i == 2 - 1)cout << jogo[i] << endl;
		else cout << jogo[i] << ",";
	}

	int temporal, armazenar;
	int arrSize = sizeof(*jogo / sizeof(jogo[0]));
	cout << "iforme qual o novo tamanho desejado para o vetor";
	cin >> temporal;

	if (temporal > arrSize) {
		jogo = (int*)realloc((void*)jogo, temporal * sizeof(int));
		arrSize = sizeof (*jogo) / sizeof(jogo[0]);

		cout << "informe os numeros para os novos espaços no vetor";
		for (int i = armazenar; i < arrSize; i++) {
			cin >> jogo[i];
		}
		cout << "impressao do vetor modificado";
		for (int i = 0; i < arrSize; i++) {
			if (i == arrSize - 1) cout << jogo[i] << endl;
			else cout << jogo[i] << ",";

		}
	}
	else {
		jogo = (int*)realloc((void*)jogo, temporal * sizeof(int));
		arrSize = sizeof(jogo) / sizeof(jogo[0]);
		cout << "menor ou igual";

		for (int i = 0; i < arrSize; i++) {
			for (int i = 0; i < arrSize; i++) {
				if (i == arrSize - 1) cout << jogo[i] << endl;
				else cout << jogo[i] << ",";
			}
		}
		delete (jogo);
	}*/



	//int qualquerNome[10];
	//int* nomeDaVarialvel = new int[10];
	//int* nomeQualquer = (int*)malloc( 10* sizeof (int));

	//for (int i = 0; i < 10; i++)
	//{
		//nomeQualquer[i] = 0;
	//}
	//delete[]nomeDaVarialvel;
	//free(nomeQualquer);


	//nomeQualquer = (int*) calloc(10,sizeof(int));
	//for (int i = 0; i < 10; i++)
	//{
	//	nomeQualquer[i] = 0;
	//}


	//nomeQualquer = (int*)realloc(nomeQualquer, 15 * sizeof(int));
	//free(nomeQualquer);


	

	system("pause");
}