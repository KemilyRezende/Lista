#include <iostream>
#include "Z.hpp"
#include "Lista.hpp"
#include <locale.h>

using namespace std;

int main(){
	Lista X;
	Lista Y;
	Lista A;
	int k, op, n, i, valor;
	setlocale(LC_ALL, "Portuguese");
	do{
		cout << "\nMENU:\n1. Pares e Impares.\n2. Jogo.\n3. Lista Z.\n4 Médias euclidianas\n5. Sair.\n";
		cin >> op;
		switch(op){
			case 1:
				cout << "\nTamanho da lista: ";
				cin >> n;
				i = 0;
				while (i < n){
					cout << "Insira o valor " << i+1 << " da lista: ";
					cin >> valor;
					A.insertItem(valor);
					i++;
				}
				A.ImparPar();
				break;
			case 2:
				A.Jogo();
				break;
			case 3:
				cout << "\nTamanho das listas: ";
				cin >> n;
				i = 0;
				while (i < n){
					cout << "Insira o valor " << i+1 << " da lista X: ";
					cin >> valor;
					X.insertItem(valor);
					cout << "Insira o valor " << i+1 << " da lista Y: ";
					cin >> valor;
					Y.insertItem(valor);
					cout << endl;
					i++;
				}
				A.listaZ(X, Y);
				break;
			case 4:
				cout << "\nTamanho das listas: ";
				cin >> n;
				i = 0;
				while (i < n){
					cout << "Insira o valor " << i+1 << " da lista X: ";
					cin >> valor;
					X.insertItem(valor);
					cout << "Insira o valor " << i+1 << " da lista Y: ";
					cin >> valor;
					Y.insertItem(valor);
					cout << endl;
					i++;
				}
				cout << "\nK pares mais próximos: ";
				cin >> k;
				A.Pares(X, Y, k);
				break;
			case 5:
				break;
		}
	} while(op < 5);
	
	return 0;
}

