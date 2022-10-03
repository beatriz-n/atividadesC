/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cStruct.h
 * Author: aluno
 *
 * Created on 15 de setembro de 2022, 08:06
 */

#ifndef CSTRUCT_H
#define CSTRUCT_H
#include <string>
using namespace std;
 struct pessoa{
      string nome,sexo;
      long int cpf;
      float altura,peso;
    };
class cStruct {
public:
    cStruct();
    cStruct(const cStruct& orig);
    virtual ~cStruct();
    
    void insertPes();
    void buscarPes(pessoa*,int cpf, int n);
    void bolha(pessoa*, int);
    pessoa binaria(pessoa*, int, int);
    void imprimePessoas(pessoa Vetor[], int n);
    
private:

};

#endif /* CSTRUCT_H */

