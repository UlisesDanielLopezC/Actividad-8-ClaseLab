#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>

using namespace std;

class Computadora{

    string sistemaop;
    string procesador;
    int RAM;
    string espacio;

public:
    Computadora();
    Computadora(const string &sistemaop,
                const string &procesador,
                int RAM, const string &espacio);

    void setSistema(const string &sistemaop);
    string getSistema();

    void setProcesador(const string &procesador);
    string getProcesador();

    void setRAM(int RAM);
    int getRAM();

    void setEspacio(const string &espacio);
    string getEspacio();

};

#endif