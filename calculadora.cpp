#include <iostream>

using namespace std;

int main(){

    float n1, n2, media;

    cout<<"----Calculadora de Médias da Fatec----"<<endl;

    cout<<"Digite a nota da P1: ";
    cin>>n1;

    while (n1<0 || n1>10){
        cout<<"Nota inválida! Digite novamente a nota da P1: ";
        cin>>n1;
    }
    
    cout<<"Digite a nota da P2: ";
    cin>>n2;

    while (n2<0 || n2>10){
        cout<<"Nota inválida! Digite novamente a nota da P2: ";
        cin>>n2;
    }

    media= (n1 + n2)/2;

    cout<<"Sua média final é: "<<media<<endl;

    if (media>=6.0){
        cout<<"Parabéns, você foi aprovado!";
    } else{
        cout<<"Poxa, você foi reprovado!";
    }

    return 0;
}