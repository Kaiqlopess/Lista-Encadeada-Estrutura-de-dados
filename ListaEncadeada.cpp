#include "ListaEncadeada.h"

#include <iostream>

using namespace std;

ListaEncadeada::ListaEncadeada(){
	cabeca = NULL;
}


void ListaEncadeada::adicionarElemento(int d)
{
	   No* novoNo =  new No(d);
	   
	   if(cabeca == NULL){
            cabeca = novoNo;	   	
            return;
	   }
	   
	   No* temp = cabeca;
	   
	   while(temp->proximo != NULL){
	   	    temp = temp->proximo;
	   }
	   
	   temp->proximo = novoNo;	
}

void ListaEncadeada::exibirElementos()
{
	if(cabeca == NULL){
		cout << "Lista vazia!" << endl;
		return;
	}
	
	No* temp = cabeca;
	
	while(temp != NULL){
		cout << temp->dado  << "->";
	   	temp = temp->proximo;
	}   
	
	cout << "NULL" << endl;	
}

void ListaEncadeada::removerItem(int d)
{
	if(cabeca == NULL){
		cout << "Lista vazia, nemhum  item a remover!" << endl;
		return;
	}
	
	if(cabeca->dado == d){
		No* temp = cabeca;
		cabeca = cabeca->proximo;
		
		delete temp;
		return;
	}
	
	No* temp = cabeca;
	No* anterior;
	

	
	while(temp != NULL && temp->dado != d){
		anterior = temp;
		temp = temp->proximo;
	}
	
 	anterior->proximo = temp->proximo;
 	cout << temp->dado << " foi deletado" << endl;
 	delete temp;
}









