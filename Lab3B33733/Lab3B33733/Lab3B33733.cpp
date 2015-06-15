// Lab3B33733.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"


int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int)time(NULL));

	// Nombres posibles a elegir para las personas.
	string nombres[20] = {"Maria", "Juan", "Ana", "Pedro", "Alejandra", "Ronald", "Ximena", "Alfredo", "Amanda", "Jose",
						  "Elsa", "Diego", "Amaia", "Esteban", "Elena", "Antonio", "Stephanie", "Ruben", "Tiana", "Elias"};

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100)); // Inserta ElmententoInt al árbol de enteros con un valor entero aleatorio entre 0 y 100.
	}

	cout << a << endl;

	ArbolBinario b;
	for (int i = 0; i < 10; ++i) {
		double d = (double)rand()*100 / (double)RAND_MAX; // Genera double aleatorio entre 0 y 100.
		b.insertarElemento(new ElementoDouble(d)); // Inserta ElmententoDouble al árbol de doubles con un valor double aleatorio.
	}

	cout << b << endl;

	ArbolBinario c;
	for (int i = 0; i < 10; ++i) {
		string name = nombres[rand() % 20]; // Elige aleatoriamente entre los 20 nombres.
		int id = rand() % 100; // Genera un id aleatorio entre 0 y 100.
		Persona* per = new Persona(name, id); // Crea persona con valores aleatorios.
		c.insertarElemento(new ElementoPersona(per)); // Inserta ElementoPersona al árbol de personas
	}

	cout << c << endl;

	system("pause");
	return 0;
}

