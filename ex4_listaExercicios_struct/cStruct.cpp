/*
Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista com o
código e nome da cada produto. Por último, consulte o preço de um produto através de seu código.

 */

/* 
 * File:   cStruct.cpp
 * Author: Usuario
 * 
 * Created on 12 de Setembro de 2022, 15:20
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
void cStruct::insertStruct(){
     int n;
    int i;
    cout << "digite quantas pessoas quer cadastrar" << endl;
    cin>>n;
    pessoa Vetpessoa[n];
   for (i = 0; i < n; i++) {
       cout<<"digite o nome do produto"<<endl;
       cin>>Vetpessoa[i].produto;
       cout<<"digite o codigo do produto"<<endl;
       cin>>Vetpessoa[i].cod;
       cout<<"digite o preço do produto"<<endl;
       cin>>Vetpessoa[i].preco;
   }
     for (i = 0; i < n; i++) {
          cout<<"produto: "<<Vetpessoa[i].produto<<endl;
          cout<<"codigo: "<<Vetpessoa[i].cod<<endl;
          cout<<"preco: "<<Vetpessoa[i].preco<<endl;
     }
    cout<<"pesquisa: "<<pesStruct(Vetpessoa,n)<<endl<<"o preço é: ";
}

float cStruct::pesStruct(pessoa Vetpessoa[], int n) {
    long int codigo;
    cout << "digite o codigo que quer localizar" << endl;
    cin>>codigo;
    for (int i = 0; i < n; i++) {
        if (Vetpessoa[i].cod == codigo) {
          return Vetpessoa[i].preco;
        }
        }
    }

