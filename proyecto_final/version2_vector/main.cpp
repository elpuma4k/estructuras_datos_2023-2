/*
 * Fecha: 17 de Octubre del 2023
 * Curso: Estructuras De Datos - Proyecto Final
 * Profesor: Carlos Ramirez Restrepo
 * Tema: Matrices Dispersas 
 * Estudiante: David Nino
 * Parabellum
*/

#include<iostream>
#include "DisperseMatrix.cpp"

using namespace std;

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
