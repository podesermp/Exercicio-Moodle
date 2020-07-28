#include <iostream>
using namespace std;
//Soma dos N primeiros naturais
int soma_rec(int n){

    if(n == 1){
        return 1;
    }else{
        return n + soma_rec(n-1);
    }
}

int fat_rec(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fat_rec(n-1);
    }
}

int main(){

    int a;
    cout << "Número: ";
    cin >> a;
    cout << "Somatório: " << soma_rec(a) << endl;
    cout << "Fatorial: " << fat_rec(a) << endl;    
}