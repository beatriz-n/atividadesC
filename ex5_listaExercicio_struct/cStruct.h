/*
 Escreva um programa que simule contas bancárias, com as seguintes especificações:
• Ao iniciar o programa vamos criar contas bancárias para três clientes.
• Cada conta terá o nome e o CPF do cliente associado a ela.
• No ato da criação da conta o cliente precisará fazer um depósito inicial.
• Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas.
• Sempre que uma operação de saque ou depósito seja realizada, o sistema deverá imprimir o nome do titular e o
saldo final da conta.
 */

/* 
 * File:   cStruct.h
 * Author: Usuario
 *
 * Created on 12 de Setembro de 2022, 18:40
 */

#ifndef CSTRUCT_H
#define CSTRUCT_H
#include <string>
using namespace std;
    struct pessoa{
        string nome;
        long int cpf;
        float depo;
    };
class cStruct {
public:
    cStruct();
    cStruct(const cStruct& orig);
    virtual ~cStruct();

    void insertCont();
    void depCont(pessoa Vetpessoa[],int i);
    void saqCont(pessoa Vetpessoa[],int i);
private:

};

#endif /* CSTRUCT_H */

