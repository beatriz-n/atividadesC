/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cStruck.h
 * Author: Usuario
 *
 * Created on 10 de Setembro de 2022, 19:51
 */

#ifndef CSTRUCK_H
#define CSTRUCK_H
#include <string>
using namespace std;

class cStruck {
public:

    cStruck();
    cStruck(const cStruck& orig);
    virtual ~cStruck();
            struct pessoa{
    string nome;
    long int matri;
    float n1,n2;
};
    void insertStruct();
    void impriStruct(pessoa Vetpessoa[], int i);
    void calcMedia(pessoa Vetpessoa[], int i);
private:

};

#endif /* CSTRUCK_H */
