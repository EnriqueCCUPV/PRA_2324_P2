#ifndef DYV_H
#define DYV_H
#include <iostream>
using namespace std;

template<typename T>

int BusquedaBinaria(T x, T v[], int i, int f){
	if (i > f){
		return -1;
	}

	int medio = (i + f) / 2;
	
	if (v[medio] == x){
		return f/2;
	}


	else{
		if (v[medio] > x){
			return BusquedaBinaria(x, v, i, medio - 1);
		}

		if (v[medio] < x){
			return BusquedaBinaria(x, v, medio + 1, f);
		}
	}
	return -1;
}

template<typename T>

void flip( T x, T y){
	T aux;
	aux = x;
	x = y;
	y = aux;
}


template<typename T>

int Partition(T *v, int i, int f){
	T x = v[f];
	int ite = i;
	for (int j = i; j < f - 1; j++)
	{
		if (v[j] <= x){
			flip(v[ite], v[j]);
			ite++;
			
		}
	}
	flip(v[ite], v[f]);
	return ite;
}

template<typename T>
int QuickSort( T *v, int i, int f){
        if (i < f){
                int pivot = Partition(v, i, f);
                QuickSort(v, i, pivot - 1);
                QuickSort(v, pivot + 1, f);
                return 0;
        }
        return 0;
}

#endif
