/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista com o
código e nome da cada produto. Por último, consulte o preço de um produto através de seu código.

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
        string produto;
        int cod;
        float preco;
    };
    void insertStruct();
    float pesStruct(pessoa Vetpessoa[], int n);
    
private:

};

#endif /* CSTRUCT_H */

