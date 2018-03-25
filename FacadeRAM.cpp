//
// Created by dario1227 on 24/03/18.
//
#include <iostream>
using namespace std;
#include "FacadeRAM.h"
void FacadeRAM::getConteo() {
    cout<<"CONTEO OBTENIDO\n";
}
void FacadeRAM::getDireccion() {
    cout<<"DIRECCION OBTENIDO\n";
}
void FacadeRAM::getEtiqueta(){
    cout<<"ETIQUETA OBTENIDO\n";
}
void FacadeRAM::getValor() {
    cout<<"VALOR OBTENIDO\n";
}
void FacadeRAM::facade() {
    getValor();
    getDireccion();
    getEtiqueta();
    getConteo();
}


