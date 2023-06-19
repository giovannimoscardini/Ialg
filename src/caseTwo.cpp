#include <iostream>
#include <fstream>
#include "dados\main.cpp"
using namespace std;

int seekUserThroughId (int id){
    //tem como dar um for pra achar isso, mas é mais fácil assim:
    string case204;
    int caseTwo;
    int userposition = id - 100000;

    cout<<"Qual informação do usuário gostaria de mudar?"<<endl;
    cout<<"1. O nome do Usuário"<<endl;
    cout<<"2. O preço da diária do usuário"<<endl;
    cout<<"3. A quantidade de dias de estadia do usuário"<<endl;
    cout<<"4. O valor total a ser pago pelo usuário"<<endl;
    
    cin>>caseTwo;
    
    switch (caseTwo)
    {
    case 1:
        cin>>userinfo[userposition].name;
        backToMenu();
        break;
    case 2:
        cin>>userinfo[userposition].dailyPrice;
        backToMenu();
        break;
    case 3:
        cin>>userinfo[userposition].days;
        backToMenu();
        break;
    case 4:
        cout<<"Realmente deseja modificar o valor total a ser pago pelo usuário sem modificar a quantidade de dias ou valor da diária?"
        cout<<"Favor inserir ""sim"" ou ""não"": "<<endl;
        cin>>case4;
        if (case4 == "sim"){
            cout<<"Por favor, insira o novo valor a ser pago pelo usuário :"<<endl;
            cin>>userinfo[userposition].totalPrice<<endl;
            backToMenu();
        } else if(case4 == "não")
            int main();
        else{
            //inserir uma função pra poder colocar sim ou não de novo
            backToMenu();
        }
        break;
    
    default:
        cout<<"Por favor, insira uma das opções de 1 a 4"<<endl;
        seekUserThroughId(id);
        backToMenu();
        break;
    }
}

void modifyingUserInfo (int desiredUserToChange){
    int desiredUserToChangeId;
    cout<<"Como deseja encontrar seu usuário?"<<endl;
    cout<<"1. Pelo ID do usuário"<<endl;
    cout<<"2. Pelo nome do usuário"<<endl;
    backToMenu();
    cin>>desiredUserToChange;
    
    switch (desiredUserToChange)
    {
    case 1:
        cout<<"Por favor, insira o ID do usuário: ";
        cin>>desiredUserToChangeId;
        backToMenu();
        seekUserThroughId(desiredUserToChangeId);
        break;
    case 2:

        break;
    default:
        break;
    }

}