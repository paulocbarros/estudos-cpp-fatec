#include <iostream>
using namespace std;

struct Valores{
    float sm, pr;
};

    float novoSalario (float sm, float pr){
        return sm + (sm * pr / 100);
    }

int main(){
    Valores v;
    int opcao;
    float novo;

    cout<<"Digite o valor do salário: ";
    cin>>v.sm;

    cout<<"Digite o valor do reajuste: ";
    cin>>v.pr;

    cout<<"\nEscolha uma opção\n";
    cout<<"1- Calcular o novo salário\n";
    cout<<"2- Sair\n";
    cout<<"Opção: ";
    cin>>opcao;

    switch (opcao)
    {
    case 1:
        novo = novoSalario(v.sm, v.pr);
        cout<<"Novo salário: "<< novo;
        break;
    case 2:
        cout<<"Saindo...";
        break;
    default:
        cout<<"Opção inválida!";
    }

return 0;
}