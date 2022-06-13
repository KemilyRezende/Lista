#include <iostream>
#ifndef __NO2__HPP
#define __NO2__HPP

using namespace std;

class No2{
	private:
		int Euclidiana;
		int p1;
		int p2;
		No2* prox;
		No2* ant;
	public:
		No2(int Euclidiana, int p1, int p2);
		void setValor(int Valor);
		int getValor();
		void setProx(No2* no);
		No2* getProx();
		void setAnt(No2* no);
		No2* getAnt();
		int getP1();
		int getP2();
};

#endif

