/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cStruct.cpp
 * Author: Usuario
 * 
 * Created on 12 de Setembro de 2022, 18:40
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
 pessoa Vetpessoa[3];
void cStruct::insertCont(){
   
     for (int i = 0; i < 3; i++) {
       cout<<"digite o nome"<<endl;
       cin>>Vetpessoa[i].nome;
       cout<<"digite o cpf"<<endl;
       cin>>Vetpessoa[i].cpf;
       cout<<"faça o deposito inicial"<<endl;
       cin>>Vetpessoa[i].depo;
       char x;
        cout<<"para fazer o saque digite S para fazer deposito digite D"<<endl;
        cin>>x;
       if(x=='S'){
           saqCont(Vetpessoa,i);
       }else{
           depCont(Vetpessoa,i);
       }
   }
}
void cStruct::depCont(pessoa Vetpessoa[],int i){
   float deposito=0;
    cout<<"digite a quantidade que deseja depositar"<<endl;
    cin>>deposito;
    deposito=Vetpessoa[i].depo+deposito;
    cout<<Vetpessoa[i].nome<<" o seu saldo é:"<<deposito<<endl;
}
void cStruct::saqCont(pessoa Vetpessoa[],int i){
     float saque=0;
     cout<<"digite a quantidade que deseja sacar"<<endl;
    cin>>saque;
    saque=Vetpessoa[i].depo-saque;
    cout<<Vetpessoa[i].nome<<" o seu saldo é:"<<saque<<endl;
}

