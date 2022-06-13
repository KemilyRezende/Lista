#include <iostream>
#include "No2.hpp"
#include "Z.hpp"

using namespace std;

Z::Z(){
	cabeca = NULL;
	cauda = NULL;
}

Z::Z(int Euclidiana, int p1, int p2){
	cabeca = new No2(Euclidiana, p1, p2);
	cauda = cabeca;
}
void Z::SwapCabeca(No2* a, No2* b){
	No2* Aux = a;
	a = b;
	a->setProx(b);
	Aux->setAnt(b);
	b->setProx(Aux);
	b->setAnt(NULL);
}

void Z::insertE(No2* a, No2* b){
	No2* Aux = a;
	No2* Aux2 = a->getAnt();
	a = b;
	a->setProx(b);
	Aux->setAnt(b);
	b->setProx(Aux);
	b->setAnt(Aux2);
}

bool Z::verificaVazia(){
	return (cabeca == NULL);
}

void Z::adicionaEuclidiana(int Euclidiana, int p1, int p2){
	No2* novo_no = new No2(Euclidiana, p1, p2);
	if (verificaVazia()){
		cabeca = novo_no;
		cauda = novo_no;
	}
	else{
		if (Size() == 1){
			if (novo_no->getValor() < cabeca->getValor()){
				SwapCabeca(cabeca, novo_no);
			}
			else {
				novo_no->setAnt(cauda);
				cauda->setProx(novo_no);
				cauda = novo_no;
			}
		}
		else{
			No2* a = cabeca;
			No2* b = a->getProx();
			bool swap = true;
			while (b){
				if (novo_no->getValor() < a->getValor()){
					insertE(novo_no, a);
					swap = false;
					break;
				}
				a = a->getProx();
				b = a->getProx();
			}
			if (swap){
				novo_no->setAnt(cauda);
				cauda->setProx(novo_no);
				cauda = novo_no;
			}
		}
	}
}

void Z::Mostrar2em2(){
	No2* a = cabeca;
	No2* b = a->getProx();
	cout << endl;
	while (b){
		cout << a->getP1() << " ,";
		cout << a->getP2() << endl;
		a = a->getProx();
		b = a->getProx();
	}
}

void Z::removeCauda(){
	cauda = cauda->getAnt();
	cauda->setProx(NULL);
}

int Z::Size(){
	if(verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";	
	}
	No2* c = cabeca;
	int tam = 0;
	do
	{
		c = c->getProx();
		tam++;
	}
	while(c);
	
	return tam;
}

void Z::reduz(int k){
	for (int i = 0; i < this->Size()-k; i++){
		this->removeCauda();
	}
}

