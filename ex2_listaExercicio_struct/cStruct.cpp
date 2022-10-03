/*
Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas.
Localize uma pessoa por meio do seu CPF e imprimir o seu IMC.
 */

/* 
 * File:   cStruct.cpp
 * Author: Usuario
 * 
 * Created on 10 de Setembro de 2022, 22:10
 */

#include "cStruct.h"
#include <iostream>
#include <string>
using namespace std;

cStruct::cStruct() {
}

cStruct::cStruct(const cStruct& orig) {
}

cStruct::~cStruct() {
}

void cStruct::insertPes() {
    int n;
    int i;
    cout << "digite quantas pessoas quer cadastrar" << endl;
    cin>>n;
    pessoa Vetpessoa[n];
    for (i = 0; i < n; i++) {
        cout << "digite o nome" << endl;
        cin >> Vetpessoa[i].nome;
        cout << "digite o sexo (F ou M)" << endl;
        cin >> Vetpessoa[i].sexo;
        cout << "digite seu cpf" << endl;
        cin >> Vetpessoa[i].cpf;
        cout << "digite sua altura" << endl;
        cin >> Vetpessoa[i].altura;
        cout << "digite seu peso" << endl;
        cin >> Vetpessoa[i].peso;

    }

        //           cout<<"----struct----"<<endl;
        //            printPes(Vetpessoa, i);
        buscarPes(Vetpessoa, n);
}
//void cStruct::printPes(pessoa Vetpessoa[], int i){

//          cout<<Vetpessoa[i].nome<<endl;
//          cout<<Vetpessoa[i].sexo<<endl;
//          cout<<Vetpessoa[i].cpf<<endl;
//          cout<<Vetpessoa[i].altura<<endl;
//}

void cStruct::buscarPes(pessoa Vetpessoa[], int n) {
    float imc = 0;
    long int locCpf;
    cout << "digite o cpf que quer localizar" << endl;
    cin>>locCpf;
    for (int i = 0; i < n; i++) {
        if (Vetpessoa[i].cpf == locCpf) {
            imc = Vetpessoa[i].peso / (Vetpessoa[i].altura * Vetpessoa[i].altura);
                    cout << "o cpf: " << locCpf << "tem o seguinte IMC: " << imc;
        }
        }
    }

