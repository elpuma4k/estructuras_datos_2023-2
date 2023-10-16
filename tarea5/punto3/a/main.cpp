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

/*
 * Complejidad de la Implementación:
 * O(n) en el que n es el tamaño de la lista, debido a que recorremos la lista completa para 
 * imprimir cada uno de los valores que contiene la estructura.
*/

/*Lista que este ordenada de mayor a menor y un numero v, inserte v en la posicion correspondiente */
/*
 * Complejidad de la implementacion:
 * O(n^2): En el peor de los casos la implementación tendria una complejidad Lineal pero
 * teniendo en cuenta los metodos utilizados "infoLista()" que en el peor de los casos tendria comlejidad Lineal
 * Por lo que la Complejidad de la implementacion es O(n²)
 */
void insertarEnListaOrdenada(Lista &l, int v){
  int size, i = 1, element;
  bool flag = false;
  size = l.longLista();
  while(i <= size && flag == false){ /*En el peor de los casos el elemento se agregaría al final */
    element = l.infoLista(i); /*El metodo "infoLista" utiliza una complejidad O(n) donde n es la posicion a buscar*/
    if(element < v){
      flag = true;
      l.insLista(v, i);
    }
    i++;
  }
}


int main(){
  Lista lis;
  int ans;
  lis.anxLista(94);
  lis.anxLista(23);
  lis.anxLista(17);
  lis.anxLista(5);
  insertarEnListaOrdenada(lis, 15);
  imprimirLista(lis);
}
