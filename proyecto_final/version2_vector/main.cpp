/*
 * Fecha: 17 de Octubre del 2023
 * Curso: Estructuras De Datos - Proyecto Final
 * Profesor: Carlos Ramirez Restrepo
 * Tema: Matrices Dispersas 
 * Estudiantes: David Nino - Juan David tabares
 * Parabellum
*/

#include<iostream>
#include "DisperseMatrix.cpp"
#include "DisperseMatrix.h"

using namespace std;

int main(){
  vector<vector<int>> matrixVector = {{1,2,3},{4,5,6},{7,8,9}};
  DisperseMatrix matrizdispersa(matrixVector);
  matrizdispersa.imprimirNotacion();
}
