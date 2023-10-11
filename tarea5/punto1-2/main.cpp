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

/*
 * Complejidad de la Implementación:
 * O(n) en el que n es el tamaño de la lista, debido a que recorremos la lista completa para 
 * determinar cuantos valores de la estructura cumplen con la condición.
*/

int obtenerIgualModulo(Lista l, int v, int k){
  int ans = 0, size, i, element, modul;
  size = l.longLista();
  modul = v % k;
  for(i = 1; i <= size; i++){
    element = l.infoLista(i);
    if(element % k == modul) ans++;
  }
  return ans;
}

int main(){
  Lista lis;
  int ans;
  lis.anxLista(11);
  lis.anxLista(23);
  lis.anxLista(17);
  lis.anxLista(94);
  lis.anxLista(45);
  lis.anxLista(33);
  lis.anxLista(38);
  lis.anxLista(16);
  imprimirLista(lis);
  ans = obtenerIgualModulo(lis, 24, 7);
  cout << "El Resultado es: " << ans << endl;
}
