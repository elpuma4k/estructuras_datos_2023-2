/*
 * Autor: David Niño - Juan David Tabares
 * Fecha de creación: 18 de Octubre
 * Profesor: Carlos Ramirez Restrepo
 * Versión: 1.0
 * 
 * Archivo encabezado libreria TAD MatrixDisperse
 * Representación Vectores
 */

#ifndef __DISPERSEMATRIX_H
#define __DISPERSEMATRIX_H

#include <iostream>
#include <vector>

using namespace std;

/************************
* ESTRUCTURAS DE DATOS *
************************/
class DisperseMatrix{
  private:
    vector<int> values;
    vector<int> rows;
    vector<int> columns;
    int countRows = 0, countColumns = 0;

  public:
    /************************
    * OPERACIONES DEL TAD *
    ************************/

    /* Constructoras */
    DisperseMatrix(vector<vector<int>> &vect);
    DisperseMatrix(DisperseMatrix &m);

    /* Modificadoras */
    void rebuild();
    void printNotation();
    void printMatrix();
    /* Retorna el valor deseado */
    int get(int &i, int &j);
    /* Obtiene el vector de los Datos importantes */
    vector<int> getRow(int &j);
    /*
    vector<int> getCol(int &i);
    // == Se Retorna un vector Incluyendo los Ceros ==
    vector<int> getDisperseRow(int &j);
    vector<int> getDisperseCol(int &i);
    // -- Aqui ya inicia lo complicado --
    void assign(int &i, int &j);
    // Operacion De Matrices 
    void add(DisperseMatrix &m);
    void productVector(const vector &vec);
    // Imprimir La matrix Separados por el carac elegido
    void printMatrix(char &caracter);
    // Obtiene el numero maximo de una matriz
    int getMax();
    DisperseMatrix getTranspose();
    // Aqui me falta una operacion

    // Sobrecarga de Operadores
    // Si Existe una matriz mas pequeña se rellenará con ceros
    DisperseMatrix operator+(DisperseMatrix &m);
    DisperseMatrix operator*(DisperseMatrix &m);
    bool operator==(DisperseMatrix &m);
    */
};

#endif
