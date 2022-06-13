#include <iostream>
#include "No.hpp"
#include "Z.hpp"
#ifndef __LISTA__HPP
#define __LISTA__HPP

using namespace std;

class Lista{
	private:
		No* cabeca;
		No* cauda;
	public:
		Lista();
		Lista (int v);
		void insertItem(int v);
		int Size();
		bool verificaVazia();
		void MostrarTodos();
		void Mostra2x2();
		void ImparPar();
		void Jogo();
		void removeCabeca();
		void removeCauda();
		void listaZ(Lista X, Lista Y);
		void Pares(Lista X, Lista Y, int k);
};

#endif
