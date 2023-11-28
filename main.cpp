#include "DyV.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

	int n;
	cout << "Introduce el tamaño del vector: "; cin >> n;
	srand(time(0));
        int datosDesord[n];
        for (int i = 0; i < (n - 1); i++){
                datosDesord[i] = rand() % 10;
        }
	datosDesord[n-1] = 10;


	char vectorchar[n];
	cout << "Prueba 1 vector de char" << endl;
	for (int i = 0; i < n; i++){
		vectorchar[i] = (char)(65 + i);
	}
	char xchar;
	cout << "Elemento a buscar: "; cin >> xchar;
	cout << "El elemento esta en la posicion: " << BusquedaBinaria(xchar, vectorchar, 0, n) << endl;


	double vectordouble[n];
	cout << "Prueba 2 vector de double" << endl;
        for (int i = 0; i < n; i++){
                vectordouble[i] = 1 + (i / 1.5);
        }
	double xdouble;
        cout << "Elemento a buscar: "; cin >> xdouble;
        cout << "El elemento esta en la posicion: " << BusquedaBinaria(xdouble, vectordouble, 0, n) << endl;


	int vectorint[n];
	cout << "Prueba 3 vector de int" << endl;
        for (int i = 0; i < n; i++){
                vectorint[i] = i;
        }
	int xint;
        cout << "Elemento a buscar: "; cin >> xint;
        cout << "El elemento esta en la posicion: " << BusquedaBinaria(xint, vectorint, 0, n) << endl;

	

	cout << "Prueba 4 vector de int desordenado" << endl;
	cout << "Inicial: " << endl;

	for (int i = 0; i < n; i++){
		cout << datosDesord[i] << endl;
	}
	QuickSort(datosDesord, 0, n-1);
	cout << "Ya deberia estar ordenado" << endl;
	for (int i = 0; i < n; i++){
                cout << datosDesord[i] << endl;
        }
	cout << "FIN";

	return 0;
}
