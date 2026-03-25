#include <iostream>
using namespace std;

struct Valores{
    int a, b, c, d;};

int calcularProduto(int a, int c){
    return a * c;
}

int calcularSoma(int b, int d){
    return b + d;
}

void mostrarResultado(int p, int s, int opcao){
    switch (opcao){
    case 1:
        cout<<"Produto (A * C)= "<<p;
        break;
    case 2:
        cout<<"Soma (B + D)= "<<s;
        break;
    case 3:
    cout<<"Produto (A * C)= "<<p<<endl;
    cout<<"Soma (B + D)= "<<s;
    break;
    default:
        cout<<"Opção invalida!!";
    }
}

int main(){

    Valores v;
    int p, s;
    int opcao;

    cout<<"Digite o valor de a: ";
    cin>> v.a;

    cout<<"Digite o valor de b: ";
    cin>> v.b;

    cout<<"Digite o valor de c: ";
    cin>>v.c;

    cout<<"Digite o valor de d: ";
    cin>>v.d;

    cout<<"\nEscolha uma opção\n";
    cout<<"1- Calcular produto de A e C\n";
    cout<<"2- Calcular soma de B e D\n";
    cout<<"3- Calcular os dois\n";
    cout<<"Opção: ";
    cin>>opcao;

    switch (opcao){
    case 1:
        p = calcularProduto (v.a, v.c);
        break;
    case 2:
        s = calcularSoma (v.b, v.d);
        break;
    case 3:
        p = calcularProduto (v.a, v.c);
        s = calcularSoma (v.b, v.d);
        break;
    default:
        cout<<"Opção invalida!";
        
    }

    mostrarResultado(p,s, opcao);

return 0;
    
}