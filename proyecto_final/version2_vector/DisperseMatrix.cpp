#include "DisperseMatrix.h"

void DisperseMatrix::imprimirNotacion() {
    cout << "+-------------------------+" << endl;
    cout << "| Valor  | Fila  | Columna |" << endl;
    cout << "+-------------------------+" << endl;

    for (int i = 0; i < values.size(); i++) {
        cout << "|   " << values[i] << "   |   " << rows[i] << "   |   " << columns[i] << "   |" << endl;
    }
    cout << "+-------------------------+" << endl;
    cout << "La cantidad de columnas es: " << countColumns << " la cantidad de filas es: " << countRows << endl;
}

DisperseMatrix::DisperseMatrix(vector<vector<int>> &vec){
  int i, j;
  if(vec.size() > countRows) countRows = vec.size();
  for(i = 0; i < vec.size(); i++){
    for(j = 0; j < vec[i].size(); j++){
      if(vec[i].size() > countColumns) countColumns = vec[i].size();
      if(vec[i][j] != 0){
        values.push_back(vec[i][j]);
        rows.push_back(i);
        columns.push_back(j);
      }
    }
  }
}

DisperseMatrix::DisperseMatrix(DisperseMatrix &m){
  countRows = m.countRows;
  countColumns = m.countColumns;
  int i;
  for(i = 0; values.size(); i++){
    values.push_back(m.values[i]);
    rows.push_back(m.rows[i]);
    columns.push_back(m.columns[i]);
  }
}


int DisperseMatrix::get(int &i, int &j){
  int pos = 0, ans;
  bool flag = false;
  while(pos < rows.size() && !flag){
    if(rows[pos] == i && columns[pos] == j){
      ans = values[pos];
      flag = true;
    }
    pos++;
  }
  if(!false) ans = 0;
  return ans;
}

vector<int> DisperseMatrix::getRow(int i){
  vector<int> ans;
  bool flag = false;
  while(pos < rows.size() && !flag){
    if(rows[pos] == i){
      ans.push_back(value[pos]);
    }
    // Evitamos que termine de iterar el vector
    if(rows[pos] > i) flag = true;
  }
  return ans;
}

