#include <iostream>
using namespace std;

void troca(int *a, int *b){

    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    int a, b;

    cout << "Valores: " << endl;
    cin >> a;
    cin >> b;
    //Valores antigos    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    troca(&a, &b);
    //Valores trocados
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}