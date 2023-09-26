/*
 * Curso: Estructura de Datos 2023-2
 * Estudiante: David Nino - 1114874514
 * Profesor: Carlos Alberto Ramirez
 * Fecha: 24 de Septiembre del 2023
 */

#include<stdio.h>
#include<string>
#include<vector>

class People{
  public:
    People(string, int);
    People(string);
    string name;
    int money;
}

People::People(string name, int money){
  this->name = name;
  this->money = money;
}

People::People(string name){
  this->name = name;
  this->money = 0;
}

int giveMoney(People p1, Peple p2){
  
}

void imprimirVector(std::vector<int>& vector){
  int n = 0;
  for(n = 0; n < vector.size(); n++){
    printf("--> %s",vector[n]);
  }
}

void solve(){
  int n;
  string nombre;
  char aux[12];
  for(i = 0; i < n; i++){
    scanf("%s", &aux);
    nombre = string(aux);
    Personaje nombre(nombre);
  }
  while(n--){
    
  }
}

int main(){
  solve();
  return 0;
}
