#include<bits/stdc++.h>
using namespace std;
int main (){
	int A[3][3];
	int B[3][3];
	int C[3][3];
	cout << "Ingrese los elementos de la Matriz A:"<< endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> A[i][j];
		}
	}
	cout << endl;
	cout << "Ingrese los elementos de la Matriz B:"<< endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> B[i][j];
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
	cout << endl;
	
	cout << "Matriz B:"<< endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultado :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}