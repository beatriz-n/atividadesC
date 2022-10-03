/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cStruct.h
 * Author: Usuario
 *
 * Created on 10 de Setembro de 2022, 22:10
 */

#ifndef CSTRUCT_H
#define CSTRUCT_H
#include <string>
using namespace std;
class cStruct {
public:
    cStruct();
    cStruct(const cStruct& orig);
    virtual ~cStruct();
    struct pessoa{
      string nome,sexo;
      long int cpf;
      float altura,peso;
    };
    void insertPes();
    void buscarPes(pessoa Vetpessoa[],int n);
//    void printPes(pessoa Vetpessoa[], int i);
private:
    
};

#endif /* CSTRUCT_H */
