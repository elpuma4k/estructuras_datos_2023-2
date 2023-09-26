#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

void sortWord(vector<string>& vector, string& word){
    cout << "Hola Mundo" << endl;
}

void imprimirVector(const vector<string> vector){
    int i;
    for(i = 0; i < vector.size() ; i++){
        cout << vector[i] << endl;
    }
}

void solve(){
    std::vector<string> words;
    int cases, n;
    string word, aux;
    words.clear();
    cin >> cases;
    while(cases--){
        cin >> word;
        cin >> n;
        while(n--){
            cin >> aux;
            words.push_back(aux);
        }
    }
}

int main(){
    solve();
    return 0;
}