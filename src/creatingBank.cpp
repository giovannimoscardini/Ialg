#include <iostream>
#include <fstream>
#include "dados\main.cpp" //importa os dados do arquivo main.cpp
using namespace std;
#define tamanho 100 //define uma constante

double price( float rate, int daysToPay) //calcula o preço total a ser pago
{   
    double amount;
    float daysToPayFloat = static_cast<float>(daysToPay);
    amount = rate * daysToPay;
    userInfo[i].totalPrice = amount;
}
/* string userName;
    long int userId;
    float dailyPrice;
    short int days;
    double totalPrice;
*/
int main()
{
    ofstream registrar ("banco.txt");

    cadastro userInfo[tamanho]; //cria um vetor que armazenará uma struct de cadastro(do arquivo main)  em cada posição

    for (int i=0; i<tamanho; i++)//cria as variaveis do banco de dados
    {   
        userInfo[i].userId = 100000 + i;
        cin>>userInfo[i].userName;
        cin>>userInfo[i].dailyPrice;
        cin>>userInfo[i].days;
        price(userInfo[i].dailyPrice, userInfo[i].days);
    }

    for (int i=0; i<tamanho; i++)
    {
        registrar<<userInfo[i].userId; //ta errado isso aq
        registrar<<userInfo[i].userName; //envia o nome armazenado na posição i para o banco
        registrar<<userInfo[i].days; //envia os dias armazenado na posição i para o banco
        registrar<<userInfo[i].dailyPrice; //envia o preço diário armazenado na posição i para o banco
    }

}