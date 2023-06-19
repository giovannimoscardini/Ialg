#include <iostream>
#include <fstream>
//#include "src\menu-cases\caseTwo.cpp"
//#include "src\creatingBank.cpp"

#include "../menu-cases/caseTwo.cpp"
#include "../creatingBank.cpp"

using namespace std;

struct cadastro // informações de cada um dos usuários
{
    string userName;
    long int userId;
    float dailyPrice;
    short int days;
    double totalPrice;
};

void backToMenu(int back){
    cout<<"0. Voltar ao menu inicial"<<endl;
    if (back == 0)
        int main();
}

void desiredFuncChoose(int desiredFunction)
{
    int case1, case2, case3, case4, case5;
    cin>>desiredFunction;
    
    switch (desiredFunction) //essa será uma série de if/else, cada caso de número inserido realizará uma função
    {
    case 1:
        
        break;
    case 2:
        modifyingUserInfo(case2);
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    
    default: //esse é o else do switch
        cout<<"Por favor insira um número de 1 a 5:"<<endl;
        desiredFuncChoose(desiredFunction); //se o usuário inserir outra coisa, chama essa funçao aqui de novo, até ele colocar certo
        break;
    }
}

int main()
{
    int desiredFunction;
    ofstream banco ("banco.txt");

    cout<<"Por favor, digite o número referente à função que gostaria de usar"<<endl;
    cout<<"1. Cadastrar novo usuário"<<endl;
    cout<<"2. Modificar informação de usuário já existente"<<endl;
    cout<<"3. Ordenar banco de dados de acordo com preferência"<<endl;
    cout<<"4. Buscar informação de usuário já existente"<<endl;
    cout<<"5. Exibir elementos do arquivo"<<endl;
    
}