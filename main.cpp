#include<iostream>
#include "laboratorio.h"

using namespace std;

int main(){

    Computadora c1 = Computadora("Windows", "Intel Core i3", 16, "512 GB");
    Computadora c2;

    Laboratorio lab;
    
    c2.setSistema("MacOS");
    c2.setProcesador("AMD Ryzen 7");
    c2.setRAM(8);
    c2.setEspacio("1 TB");

    lab.agregarComputadora(c1);
    lab.agregarComputadora(c2);

    lab.mostrar();

    return 0;
}