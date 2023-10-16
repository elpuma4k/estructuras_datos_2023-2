/*
 * Fecha: 10 de Octubre del 2023
 * Curso: Estructuras De Datos - Tarea 5
 * Profesor: Carlos Ramirez Restrepo
 * Tema: Aplicaciones TAD Lista
 * Estudiante: David Nino
 * Parabellum
*/
#include<iostream>
#include "lista.cpp"

using namespace std;

/*
 * Complejidad de la Implementación:
 * O(n) en el que n es el tamaño de la lista, debido a que recorremos la lista completa para 
 * imprimir cada uno de los valores que contiene la estructura.
*/

void imprimirLista(Lista l){
  int size, i = 1, element;
  size = l.longLista();
  for(i = 1; i <= size; i++){
    element = l.infoLista(i);
    if(i < size) cout << element << ", ";
    else{
      cout << element << endl;
    }
  }
}

void restarListas(Lista &l1, Lista &l2){
  int size1, size2,  i = 1, element1, element2, j = 1;
  size1 = l1.longLista();
  size2 = l2.longLista();
  i = 1;
  while(i <= size2){
    element1 = l2.infoLista(i);
    j = 1;
    while(j <= size1){
      element2 = l1.infoLista(j);
      if(element1 == element2){
        l1.elimLista(j);
        size1--;
      }
      j++;
    }
    i++;
  }
}

int main(){
  Lista lis1;
  Lista lis2;
  int ans;
  lis1.anxLista(1);
  lis1.anxLista(2);
  lis1.anxLista(3);
  lis1.anxLista(4);
  lis1.anxLista(5);
  imprimirLista(lis1);
  lis2.anxLista(2);
  lis2.anxLista(4);
  imprimirLista(lis2);
  cout << "El Resultado es: " << endl;
  restarListas(lis1, lis2);
  imprimirLista(lis1);
}
