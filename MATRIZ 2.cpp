#include<bits/stdc++.h>
using namespace std;
int main (){
	int A[3][3];
	int N;
    cout << "Ingrese los elementos de la Matriz A:"<< endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> A[i][j];
		}
	}
	cout << endl;
	cout << "Matriz A:"<< endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
    cout << "Valor a buscar :" ;
    cin >> N ;
    cout << endl;
	cout << "El valor " << N << " se encuentra en :" << endl; 
    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(N == A[i][j]){
				cout << "Fila " << i << " Columna " << j << endl;
			}	
		}
	}
    return 0;
}