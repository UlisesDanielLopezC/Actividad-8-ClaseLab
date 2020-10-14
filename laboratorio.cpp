#include "laboratorio.h"
#include<fstream>

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

void Laboratorio::respaldar_tabla(){

    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){

        archivo << left;
        archivo << setw(13) << "Sistema Op.";
        archivo << setw(16) << "Procesador";
        archivo << setw(12) << "RAM (GB)";
        archivo << setw(8) << "Espacio";
        archivo << endl;

        for(size_t i = 0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){

    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){

        for(size_t i = 0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo << c.getSistema() << endl;
            archivo << c.getProcesador() << endl;
            archivo << c.getRAM() << endl;
            archivo << c.getEspacio() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){

    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int RAM;
        Computadora c;

        while (true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setSistema(temp);

            getline(archivo, temp);
            c.setProcesador(temp);

            getline(archivo, temp);
            RAM = stoi(temp);
            c.setRAM(RAM);

            getline(archivo, temp);
            c.setEspacio(temp);

            agregarComputadora(c);
        }
        
    }
    archivo.close();
}