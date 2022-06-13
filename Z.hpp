#include <iostream>
#include "No2.hpp"
#ifndef __Z__HPP
#define __Z__HPP

using namespace std;

class Z{
	private:
		No2* cabeca;
		No2* cauda;
	public:
		Z();
		Z(int Euclidiana, int p1, int p2);
		void adicionaEuclidiana(int Euclidiana, int p1, int p2);
		void SwapCabeca(No2* a, No2* b);
		void insertE(No2* a, No2* b);
		bool verificaVazia();
		int Size();
		void Mostrar2em2();
		void reduz(int k);
		void removeCauda();
		
};

#endif

