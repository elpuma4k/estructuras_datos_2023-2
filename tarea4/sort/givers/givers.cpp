/* 
 * Tema: Tarea 4 - Ejercicio Givers
 * Asignatura: Estructura de Datos
 * Profesor: Carlos Alberto Ramirez
 * Estudiante: David Nino Galvis
 * Fecha: 26 de Septiembre del 2023
 * "Parabellum"
 * Complejidad del Algoritmo: O()
*/
#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;


void imprimirVector(const vector<string>& vector){
  int n;
  for(n = 0; n < vector.size(); n++){
    cout << vector[n] << endl;
  }
}

void imprimirVectorInt(const vector<int>& vector){
  int n;
  for(n = 0; n < vector.size(); n++){
    cout << "-> " << vector[n] << endl;
  }
}

int findPerson(const vector<string>& vector, string& nombre){
  int n = 0, ans;
  bool flag = true;
  while(n < vector.size() && flag){
    if(nombre == vector[n]){
      flag = false;
      ans = n;
    } 
    n++;
  }
  return ans;
}

void solve(){
  int n, i, position, j, money = 0, partition = 0, modul = 0;
  string nombre;
  bool flag;
  vector<string> personas;
  vector<int> dinero;
  personas.clear();
  dinero.clear();
  while(cin >> n){
  for(i = 0; i < n; i++){
    cin >> nombre;
    personas.push_back(nombre);
    dinero.push_back(0);
  }
  i = 0; 
/* Termina la Lectura de Datos */
  while(i < n){
    cout << "Pasa por aqui" << endl;
    flag = true;
    /*Variables a reiniciar:modul,partition,money*/
    cin >> nombre;
    cin >> money;
    cin >> j;
    if(j == 0) flag = false;
    else {
    modul = money % j;
    partition = (money-modul) / j;
    position = findPerson(personas,nombre);
    money -= modul;
    dinero[position] -= money;}
    /*Aqui Realizamos la division y regreso del residuo*/
    while(j-- && flag){
      cout << "Pasa por aqui tambien" << endl;
      cin >> nombre;
      position = findPerson(personas, nombre);
      dinero[position] += partition;
    }
    i++;
  }
  for(i = 0; i < personas.size(); i++){
    cout << personas[i] << " " << dinero[i] << endl;
  }
  cout << endl;
  }
}

int main(){
  solve();
  return 0;
}