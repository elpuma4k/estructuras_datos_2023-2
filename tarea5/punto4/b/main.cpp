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

int main(){
  Lista lis;
  Lista lis2;
  Lista lis3;
  int ans;
  lis.anxLista(2);
  lis.anxLista(4);
  lis.anxLista(6);
  lis.anxLista(8);
  lis2.anxLista(1);
  lis2.anxLista(2);
  lis2.anxLista(3);
  lis2.anxLista(4);
  cout << "La lista 1 es: " << endl;
  imprimirLista(lis);
  cout << "La lista 2 es: " << endl;
  imprimirLista(lis2);
  cout << "El Resultado es: " << endl;
  lis3 = lis - lis2;
  imprimirLista(lis3);
}
