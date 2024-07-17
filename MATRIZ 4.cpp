#include<bits/stdc++.h>
using namespace std;
void cambiarFilas(int A[][4] , int N ,int M){
    for(int i = 0; i < 4; i++){
			int aux = A[N][i];
			A[N][i] = A[M][i];
			A[M][i] = aux ;
	}
}  
int main (){
	int A[4][4];
	int N ,M;
    cout << "Ingrese los elementos de la Matriz A:"<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cin >> A[i][j];
		}
	}
	cout << endl;
	cout << "Matriz A:"<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
    cout << endl;
    cout << "Filas a intercambiar (0 - 3) :" << endl ;
    cin >> N >> M ;
    cambiarFilas(A , N , M);
    cout << "Matriz resultante:"<< endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}