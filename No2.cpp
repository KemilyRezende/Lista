#include <iostream>
#include "No2.hpp"

using namespace std;

No2::No2(int Euclidiana, int p1, int p2){
	this->Euclidiana = Euclidiana;
	this->p1 = p1;
	this->p2 = p2;
	this->prox =  NULL;
	this->ant = NULL;
}

void No2::setValor(int valor){
	this->Euclidiana = valor;
}

int No2::getValor(){
	return this->Euclidiana;
}

void No2::setAnt(No2* no){
	this->ant = no;
}

No2* No2::getAnt(){
	return this->ant;
}

void No2::setProx(No2* prox){
	this->prox = prox;
}

No2* No2::getProx(){
	return this->prox;
}
int No2::getP1(){
	return this->p1;
}
int No2::getP2(){
	return this->p2;
}
