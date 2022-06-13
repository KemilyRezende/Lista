#include <iostream>
#include "No.hpp"

using namespace std;

No::No(int v){
	this->Valor = v;
	this->prox =  NULL;
	this->ant = NULL;
}

void No::setValor(int valor){
	this->Valor = valor;
}

int No::getValor(){
	return this->Valor;
}

void No::setAnt(No* no){
	this->ant = no;
}

No* No::getAnt(){
	return this->ant;
}

void No::setProx(No* prox){
	this->prox = prox;
}

No* No::getProx(){
	return this->prox;
}
