#include "lista.h"

Lista::Lista(){
  act = NULL;
}

/*Complejidad de La Implementación:
 * infoLista(): Posee una complejidad O(n) donde n es la posicion a buscar de la lista.
 * anxLista(): Posee una complejidad O(n) Donde n es la longitud de la lista.
 * Complejidad de la implementacion Total T(n) = n*m*(m-i) debido a que la funcion de infolista varia dependiendo
 * la posicion del nodo que se desea identificar. Utilice la funcion "anxLista()" debido a que considero que es la forma
 * mas eficiente y no es necesario crearla de nuevo.
*/

int Lista::longLista(){
  Nodo* tmp = act;
  int cont = 0;

  while(tmp != NULL){
    tmp = tmp->sig;
    cont++;
  }

  return cont;
}

Lista Lista::operator-(Lista &l2){
  Lista ans;
  Nodo* tmp = act;
  int elemento, j, size2, count;
  size2 = l2.longLista();
  bool flag = false;
  while(tmp != NULL){
    elemento = tmp->dato;
    j = 1;
    count = 0;
    while(j <= size2 && !flag){
      if(elemento == l2.infoLista(j)){
        flag = true;
      }
      else{
        count++;
      }
      j++;
    }
    if(count == size2) ans.anxLista(tmp->dato);
    tmp = tmp->sig;
  }
  return ans;
}

void Lista::anxLista(Elemento elem){
  Nodo* tmp;
  Nodo* nuevo = new Nodo;
  nuevo->dato = elem;
  nuevo->sig = NULL;

  if(act == NULL)
    act = nuevo;
  else{
    tmp = act;
    while(tmp->sig != NULL)
      tmp = tmp->sig;
    tmp->sig = nuevo;
  }
}

void Lista::insLista(Elemento elem, int pos){
  Nodo *nuevo, *tmp;
  nuevo = new Nodo;
  nuevo->dato = elem;
  nuevo->sig = NULL;

  if(pos >= 1 && pos <= longLista()){
    if(pos == 1){
      nuevo->sig = act;
      act = nuevo;
    }
    else{
      tmp = act;
      for(int i = 0; i < pos - 2; i++)
	tmp = tmp->sig;
      nuevo->sig = tmp->sig;
      tmp->sig = nuevo;
    }
  }
}

void Lista::elimLista(int pos){
  Nodo *tmp, *elim;
  if(pos >= 1 && pos <= longLista()){
    if(pos == 1)
      act = act->sig;
    else{
      tmp = act;
      for(int i = 0; i < pos-2; i++)
	tmp = tmp->sig;
      elim = tmp->sig;
      tmp->sig = tmp->sig->sig;
      delete elim;
    }
  }
}

Elemento Lista::infoLista(int pos){
  Nodo* tmp = act;

  for(int i = 1; i < pos; i++)
    tmp = tmp->sig;

  return tmp->dato;
}

bool Lista::vaciaLista(){
  return act == NULL;
}
