/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cStruct.cpp
 * Author: aluno
 * 
 * Created on 15 de setembro de 2022, 08:06
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
    long int locCpf;
    cout << "digite o cpf que quer localizar" << endl;
    cin>>locCpf;
    buscarPes(Vetpessoa, locCpf, n);
    
    this->imprimePessoas(Vetpessoa, n);
    this->bolha(Vetpessoa, n);
    this->imprimePessoas(Vetpessoa, n);
    
     
    
    
    cout<<"pesquisa binaria"<<binaria(Vetpessoa, locCpf, n).nome;
}

void cStruct::buscarPes(pessoa Vetpessoa[], int locCpf, int n) {
    float imc = 0.0;
    bool achou=false;
    for (int i = 0; i < n; i++) {
        if (Vetpessoa[i].cpf == locCpf) {
            imc = Vetpessoa[i].peso / (Vetpessoa[i].altura * Vetpessoa[i].altura);
                    cout<< Vetpessoa[i].nome  << " seu cpf: "<< locCpf << "tem o seguinte IMC: " << imc << endl;
                    achou = true;
        }
    }
    if(!achou)
        cout<<"não encontrado";
     
 }

void cStruct::bolha(pessoa Vetpessoa[], int n) {
    int i, j;
    pessoa temp;
    bool troca;
    troca = true;
    for (i = n - 1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j = 0; j < i; j++)
            if (Vetpessoa[j].cpf > Vetpessoa[j + 1].cpf) {
                temp = Vetpessoa[j];
                Vetpessoa[j] = Vetpessoa[j + 1];
                Vetpessoa[j + 1] = temp;
                troca = true;
            }
    }
   //return Vetpessoa;
}

struct pessoa cStruct::binaria(pessoa Vetpessoa[], int locCpf, int n) {
        //pessoa pesOrg[n] = bolha(Vetpessoa, n);
        int inf, sup, meio;
        inf = 0;
        sup = n - 1;
        while (inf <= sup) {
            meio = (inf + sup) / 2;
            if (locCpf == Vetpessoa[meio].cpf)
                return Vetpessoa[meio];
            else if (locCpf < Vetpessoa[meio].cpf)
                sup = meio - 1;
            else
                inf = meio + 1;
        }
    
}

void cStruct::imprimePessoas(pessoa Vetor[], int n){

    for (int i = 0; i < n; i++) {
        cout <<Vetor[i].nome;
        cout << Vetor[i].cpf;
    }

}

