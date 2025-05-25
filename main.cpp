#include <iostream>
#include "ListaEncadeada.h"


int main(int argc, char** argv) {
	ListaEncadeada l;
	
	l.adicionarElemento(4); 
	l.adicionarElemento(5);
	l.adicionarElemento(6);

	l.removerItem(4);
	
	l.exibirElementos();
	
	return 0;
}
