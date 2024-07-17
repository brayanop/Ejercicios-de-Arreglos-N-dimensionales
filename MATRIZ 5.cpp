//Escriba un programa que encuentre el valor máximo y el valor mínimo en una matriz de 4x4, indicando sus posiciones
#include<bits/stdc++.h>
using namespace std;
int main (){
	int A[4][4];
	int  max , min;
    cout << "Ingrese los elementos de la Matriz A:"<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cin >> A[i][j];
		}
	}
	min = A[0][0];
	max = A[0][0];
	cout << "Matriz A:"<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(max < A[i][j]){
				max = A[i][j];
			}
			if(min > A[i][j]){
				min = A[i][j] ;
			}
		}
	}
    cout << "El maximo valor ingresado en la Matriz es:" << max << endl;
    cout << "El minimo valor ingresado en la Matriz es:" << min << endl;
    return 0;
}