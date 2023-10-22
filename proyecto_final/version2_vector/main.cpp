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
  vector<vector<int>> matrixVector = {{0,3,2,1,2},{2,4,0,5,2},{0,0,0,3,1},{4,5,6,8,9}};
  DisperseMatrix matrizdispersa(matrixVector);
  matrizdispersa.printNotation();
}
