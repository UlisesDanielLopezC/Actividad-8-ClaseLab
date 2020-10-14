#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p){
    if(cont < 5){
        arreglo[cont] = p;
        cont++;
    }else{
        cout<< "Arreglo lleno" <<endl;
    }
}

void Laboratorio::mostrar(){

    cout << left;
    cout << setw(13) << "Sistema Op.";
    cout << setw(16) << "Procesador";
    cout << setw(12) << "RAM (GB)";
    cout << setw(8) << "Espacio";
    cout << endl;

    for(size_t i = 0; i<cont; i++){

        Computadora &c = arreglo[i];
        cout << c;
        //cout<<"Sistema Operativo: "<< arreglo[i].getSistema() <<endl;
        //cout<<"Procesador: "<< arreglo[i].getProcesador() <<endl;
        //cout<<"Memoria RAM: "<< arreglo[i].getRAM() <<endl;
        //cout<<"Almacenamiento: "<< arreglo[i].getEspacio() <<endl<<endl;
    }
}