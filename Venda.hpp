
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

// Ajuste das variáveis e comentários que não usar é melhor tirar

class Venda{

    public:
    double valor;
    string descricao;
    Especialista esp;
    string cliente;


    void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;

    }
};

#endif
