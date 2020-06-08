#pragma once

#include <NTL/ZZ.h>
#include <iostream>

using namespace std;
using namespace NTL;

class Criba
{
public:
	Criba();

	void Arreglo_Primos();
	void Arreglo_Primos2();
	void Imprimir(ZZ* arreglo, int tam);

	virtual ~Criba();
protected:
private:
};