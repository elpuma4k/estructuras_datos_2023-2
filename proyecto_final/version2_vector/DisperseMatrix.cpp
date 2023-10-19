#include "DisperseMatrix.h"

void DisperseMatrix::imprimirNotacion() {
    cout << "+-------------------------+" << endl;
    cout << "| Valor  | Fila  | Columna |" << endl;
    cout << "+-------------------------+" << endl;

    for (int i = 0; i < values.size(); i++) {
        cout << "|   " << values[i] << "   |   " << rows[i] << "   |   " << columns[i] << "   |" << endl;
    }
    cout << "+-------------------------+" << endl;
}

DisperseMatrix::DisperseMatrix(vector<vector<int>> &vec){
  int i, j;
  for(i = 0; i < vec.size(); i++){
    for(j = 0; j < vec[i].size(); j++){
      if(vec[i][j] != 0){
        values.push_back(vec[i][j]);
        rows.push_back(i);
        columns.push_back(j);
      }
    }
  }
}

DisperseMatrix::DisperseMatrix(DisperseMatrix &m){
  int i;
  for(i = 0; values.size(); i++){
    values.push_back(m.values[i]);
    rows.push_back(m.rows[i]);
    columns.push_back(m.columns[i]);
  }
}
/*
int DisperseMatrix::get(int i, int j){
  int posI;
  for(posI = 0; posI < rows.size(); posI++){
    if(rows[i] == posI){

    }
  }
}

vector<int> DisperseMatrix::getRow(int j){
  cout << "En producción" << endl;
  return 0;
}

*/
