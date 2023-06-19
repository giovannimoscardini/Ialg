> float aFloat = static_cast<float>(a);

~~~cpp
#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    int idade;
    std::string nascimento;
};

int main() {
    const int numPessoas = 3;
    Pessoa pessoas[numPessoas];

    for (int i = 0; i < numPessoas; ++i) {
        std::string input;

        std::getline(std::cin, input);

        size_t pos = input.find(' ');
        pessoas[i].nome = input.substr(0, pos);

        size_t nextPos = input.find(' ', pos + 1);
        pessoas[i].idade = std::stoi(input.substr(pos + 1, nextPos - pos));

        pessoas[i].nascimento = input.substr(nextPos + 1);
    }

    return 0;
}

~~~