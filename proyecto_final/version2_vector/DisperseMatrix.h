/*
Autores: David Niño - Juan David Tabares
Clase asociada al TAD DisperseMatrix con formato coordenado.
*/

#ifndef __DISPERSEMATRIX_H
#define __DISPERSEMATRIX_H

#include <iostream>
#include <vector>
using namespace std;

class DisperseMatrix{

    vector<int> values;
    vector<int> rows;
    vector<int> columns;
    int countRows = 0, countColumns = 0;

  public:
    
    //Constructoras
    DisperseMatrix(vector<vector<int>> &vect);
    DisperseMatrix(DisperseMatrix &m);

    //Operaciones de consulta
    int get(int i, int j);
    vector<int> getRow(int j);
    vector<int> getCol(int i);
    vector<int> getDisperseRow(int j);
    vector<int> getDisperseCol(int i);
    int getMax();
    DisperseMatrix getTranspose();

    //Operaciones modificadoras
    void rebuild();
    void assign(int i, int j);
    void add(DisperseMatrix &m);
    void productVector(const vector &vec);
    void printMatrix(char &sep);
    DisperseMatrix addMatrixList(vector<DisperseMatrix> &iM);

    //Sobrecarga de operadores
    DisperseMatrix operator+(DisperseMatrix &m);
    DisperseMatrix operator*(DisperseMatrix &m);
    bool operator==(DisperseMatrix &m);
    
};

#endif
