#include <iostream>
using namespace std;
void Espiral(int A[][100] ,int N, int M) {
    int F_inicio = 0, F_fin = N - 1;
    int C_inicio = 0, C_fin = M - 1;

    while (F_inicio <=  F_fin && C_inicio <= C_fin) {
        for (int i = C_inicio ; i <= C_fin;i++){
            cout << A[F_inicio][i] << " ";
        }
        F_inicio++;

        for (int i = F_inicio; i <=F_fin;i++) {
            cout << A[i][C_fin] << " ";
        }
        C_fin--;
        if (F_inicio <= F_fin) {
            for (int i = C_fin; i >= C_inicio; i--) {
                cout << A[F_fin][i] << " ";
            }
            F_fin--;
        }
        if (C_inicio <= C_fin) {
            for (int i = F_fin; i >= F_inicio; i--) {
                cout << A[i][C_inicio] << " ";
            }
            C_inicio++;
        }
    }
}

int main() {
    int A[100][100];
	int N , M ; 
    cout << "Ingrese la cantidad de filas: " << endl ;
    cin >> N;
    cout << "Ingrese la cantidad de columnas: " << endl ;
    cin >> M;
    cout << "Ingrese los elementos de la Matriz A:"<< endl;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> A[i][j];
		}
	}
	
	cout << "Matriz A:"<< endl;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
    cout << "Recorrido en espiral:" << endl;
    Espiral(A,N,M);
    cout << endl;

    return 0;
}