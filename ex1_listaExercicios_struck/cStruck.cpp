/*
Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos.
Em seguida imprima a matrícula, o nome e a média de cada um deles.

 */

/* 
 * File:   cStruck.cpp
 * Author: Usuario
 * 
 * Created on 10 de Setembro de 2022, 19:51
 */

#include "cStruck.h"
#include <iostream>
#include <string>
using namespace std;
cStruck::cStruck() {
}

cStruck::cStruck(const cStruck& orig) {
}

cStruck::~cStruck() {
}

void cStruck::insertStruct(){
    int n,i;
            cout<<"digite quantas pessoas quer cadastrar"<<endl;
        cin>>n;
        pessoa Vetpessoa[n];
        for( i=0;i<n;i++){
        cout<<"digite o nome"<<endl;
        cin>>Vetpessoa[i].nome;
        cout<<"digite a matricula"<<endl;
        cin>>Vetpessoa[i].matri;
        cout<<"digite a primeira nota"<<endl;
        cin>>Vetpessoa[i].n1;
        cout<<"digite a segunda nota"<<endl;
        cin>>Vetpessoa[i].n2;
        
    }
        for(i=0;i<n;i++){
            cout<<"--------matricula----------"<<endl;
            impriStruct(Vetpessoa, i);
            cout<<"--------media -----------"<<endl;
            calcMedia(Vetpessoa,i);
        }
}
void cStruck::impriStruct(pessoa Vetpessoa[], int i){
          cout<<Vetpessoa[i].matri<<endl;
}

void cStruck::calcMedia(pessoa Vetpessoa[], int i){
    float media;
    media=(Vetpessoa[i].n1+ Vetpessoa[i].n2)/2;
    cout<<media<<endl;
}