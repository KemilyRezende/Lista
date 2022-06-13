#include <iostream>
#include "No.hpp"
#include "Z.hpp"
#include <math.h>
#include <stdlib.h>
#include "Lista.hpp"

using namespace std;

Lista::Lista(){
	cabeca = NULL;
	cauda = NULL;
}

Lista::Lista(int v){
	cabeca = new No(v);
	cauda = cabeca;
}

void Lista::insertItem(int v){
	No* novo_no = new No(v);
	if (verificaVazia()){
		cabeca = novo_no;
		cauda = novo_no;
	}
	else{
		novo_no->setAnt(cauda);
		cauda->setProx(novo_no);
		cauda = novo_no;
		
	}
}

bool Lista::verificaVazia(){
	return (cabeca == NULL);
}

void Lista::MostrarTodos(){
	cout << "\nImprimindo elementos.\n";
	No* c = cabeca;
	int i = 0;
	int valor;
	if(verificaVazia())
		cout << "Lista vazia!\n";
	else
	{
		for (i = 0; i< this->Size(); i++)
		{
			valor = c->getValor();
			cout << valor << endl;
			c = c->getProx();
		}
	}
}

int Lista::Size(){
	if(verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";	
	}
	No* c = cabeca;
	int tam = 0;
	do
	{
		c = c->getProx();
		tam++;
	}
	while(c);
	
	return tam;
}

void Lista::ImparPar(){
	int impar = 0;
	int par = 0;
	No* a = cabeca;
	No* b = a->getProx();
	while (b){
		int div = a->getValor()/2;
		int resto = a->getValor()-(div*2);
		if (resto == 0){
			par++;
		}
		else {
			impar++;
		}
		a = a->getProx();
		b = a->getProx();
	}
	cout << "\nQuantos ímpares: " << impar << endl;
	cout << "\nQuantos pares: " << par << endl;
}

void Lista::Jogo(){
	Lista L1;
	Lista L2;
	int value;
	for (int i = 0; i<3; i++){
		value = rand()%13;
		L1.insertItem(value);
		value = rand()%13;
		L2.insertItem(value);
	}
	value = rand()%13;
	No* a = L1.cabeca;
	No* b = L2.cabeca;
	int var = 0;
	int somaL1 = 0;
	int somaL2 = 0;
	for (int i = 0; i<3; i++){
		cout << "\nL1(" << i << "): " << a->getValor() << ". L2(" << i << "): " << b->getValor() << endl;
		var = a->getValor() - value;
		a->setValor(var);
		somaL1 = somaL1 + a->getValor();
		
		var = b->getValor() - value;
		b->setValor(var);
		somaL2 = somaL2 + b->getValor();
		a = a->getProx();
		b = b->getProx();
	}
	cout << "\nNúmero subtraído: " << value << ".\n";
	
	if (somaL1 > somaL2){
		cout << "\nVencedor: Lista 1. Soma final: " << somaL1 << ".\n";
	}

	else if (somaL1 < somaL2){
		cout << "\nVencedor: Lista 2. Soma final: " << somaL2 << ".\n";
	}
	else {
		cout << "\nEmpate!! Soma final: " << somaL1 << ".\n";
	}
}

void Lista::removeCabeca(){
	cabeca = cabeca->getProx();
	cabeca->setAnt(NULL);
}
void Lista::removeCauda(){
	cauda = cauda->getAnt();
	cauda->setProx(NULL);
}

void Lista::Mostra2x2(){
	No* a = cabeca;
	No* b = a->getProx();
	cout << endl;
	while (b){
		cout << a->getValor() << " ,";
		a = a->getProx();
		cout << a->getValor() << endl;
		b = a->getProx();
	}
	
}

void Lista::listaZ(Lista X, Lista Y){
	No* x = X.cabeca;
	No* y = Y.cauda;
	Lista LZ;
	for (int i = 0; i < X.Size(); i++){
		LZ.insertItem(x->getValor());
		LZ.insertItem(y->getValor());
		x = x->getProx();
		y = y->getAnt();
		X.removeCabeca();
		Y.removeCauda();
	}
	LZ.Mostra2x2();
}

void Lista::Pares(Lista X, Lista Y, int k){
	No* a = X.cabeca;
	No* b = Y.cabeca;
	Z z;
	int Euclidiana;
	for (int i = 0; i < X.Size(); i++){
		Euclidiana = sqrt((pow(a->getValor(),2)+pow(b->getValor(), 2)));
		z.adicionaEuclidiana(Euclidiana, a->getValor(), b->getValor());
		a = a->getProx();
		b = b->getProx();
	}
	z.Mostrar2em2();
	z.reduz(k);
	z.Mostrar2em2();
}
