#include<bits/stdc++.h>
using namespace std;
int main (){
	int A[4][4];
	int N;
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
    int suma1 = 0;
	
    for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i == j){
				suma1 += A[i][j];
			}	
		}
	}
	cout << "La suma de la diagonal principal :" << suma1 << endl; 
	int suma2 = 0;
    for(int i = 0; i < 4 ;i++){
				suma2 += A[i][4 - 1 - i];	
		}
	cout << "La suma de la diagonal secundaria :" << suma2 << endl; 
	int sumatotal = suma1 + suma2 ;
	cout << " La suma de las dos diagonales es :" << sumatotal << endl; 
    return 0;
}