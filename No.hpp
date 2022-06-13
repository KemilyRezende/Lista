#include <iostream>
#ifndef __NO__HPP
#define __NO__HPP

using namespace std;

class No{
	private:
		int Valor;
		No* prox;
		No* ant;
	public:
		No(int);
		void setValor(int valor);
		int getValor();
		void setProx(No* no);
		No* getProx();
		void setAnt(No* no);
		No* getAnt();
};

#endif


