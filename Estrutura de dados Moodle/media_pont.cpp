#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

struct aluno{
    float nota[3];
    float media;
};

void calcula_media(aluno *a){

    float soma = 0;
    for(int i = 0; i < 3; i++){
        soma = soma + a->nota[i];
    }
    
    a->media = soma/3;
}


int main(){

    aluno a;
    int i;

    for(i = 0; i < 3; i++){
        cin >> a.nota[i];
    }

    calcula_media(&a);

    std::cout << std::fixed;
    std::cout << std::setprecision(1) << a.media;

    return 0;
}