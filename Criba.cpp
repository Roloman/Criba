// Criba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Criba.h"

const int rango = (99);

Criba::Criba()
{
    /*ZZ* primos;
    ZZ rango;
    cout << "Ingrese el rango de numeros primos = ";
    cin >> rango;
    ZZ a = ZZ(2);
    for (int i = 0; i < rango; i++) {
        primos[i] = a;
        a++;
    }*/
}

void Criba::Arreglo_Primos() {

    ZZ primos[rango];

    ZZ a = ZZ(0);
    for (int i = 0; i < rango; i++) {
        primos[i] = a;
        a++;
    }
    /*for(int i = 0; i < rango; i++)
        if (primos[i] != 0) {
            for (ZZ j = primos[i]+1; j < rango; j += primos[i]) {
                primos[j] = 0;
            }
        }*/


    for (int i = 4; i < rango; i += 2) {
        primos[i] = 0;
    }


    for (int i = 0; i < rango; i++) {
        cout << primos[i] << "  ";
    }
}

void Criba::Arreglo_Primos2() {

    int primos[rango];
    int a = 0;
    for (int i = 0; i < rango; i++) {
        primos[i] = a;
        a++;
    }
    for (int i = 0; i < rango; i++)

        if (primos[i] > 1) {
            for (int j = (primos[i]*2); j < rango; j += primos[i]) {
                primos[j] = 0;
            }
        }
    primos[1] = 0;

    for (int i = 0; i < rango; i++) {
        cout << primos[i] << "  ";
    }
    cout << endl << endl << endl;

    int r = 0;
    for (int i = 0; i < rango; i++) {
        if (primos[i] != 0)
            r++;
    }

    cout << r << endl << endl << endl << endl;

    int primosA[25];

    a = 0;
    for (int i = 0; i < rango; i++) {
        if (primos[i] != 0) {
            primosA[a] = primos[i];
            a++;
        }
    }

    for (int i = 0; i < 25; i++) {
        cout << primosA[i] << "  ";
    }
}

void Criba::Imprimir(ZZ* arreglo, int tam) {

    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << "  " << endl;
    }
}

Criba::~Criba()
{
    //dtor
}



int main()
{
    Criba a;
    ZZ b;
    a.Arreglo_Primos2();
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
