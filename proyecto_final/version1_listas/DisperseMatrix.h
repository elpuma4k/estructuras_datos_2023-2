/*
Autores: David Niño - Juan David Tabares
IM
*/
#ifndef __DISPERSEMATRIX_H
#define __DISPERSEMATRIX_H

#include <vector>
#include <list>
using namespace std;

class DisperseMatrix{
    list<int> l;

public:
    //Constructoras
    DisperseMatrix(list<list<int>> &oM);
    DisperseMatrix(vector<vector<int>> &oM);
    DisperseMatrix(DisperseMatrix &oM);

    //Operaciones de consulta
    int get(int i, int j);
    list<int> getRow(int i);
    list<int> getCol(int j);
    list<int> getDisperseRow(int i);
    list<int> getDisperseCol(int j);
    int getMax();
    void getTranspose();

    //Operaciones modificadoras
    void rebuild();
    void assign(int i, int j);
    void add(DisperseMatrix &oM);
    void printMatrix(char &sep);
    void productVector(vector<int> &vec);
    DisperseMatrix addMatrixList(list<DisperseMatrix> &iM);

    //Sobrecarga de operadores
    DisperseMatrix operator+(DisperseMatrix &oM);
    DisperseMatrix operator*(DisperseMatrix &oM);
    bool operator==(DisperseMatrix &oM);
};

#endif
