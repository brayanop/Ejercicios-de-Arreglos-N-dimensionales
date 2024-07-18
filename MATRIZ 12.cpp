#include <bits/stdc++.h>
using namespace std;
const int N = 10; 
const int M = 10; 
void mostrarTablero(int tablero[N][M]) {
    for (int i=0;i< N; i++) {
        for (int j=0;j< M;j++) {
            cout<<tablero[i][j] << " ";
        }
        cout<< endl;
    }
    cout<< endl;
}
int contarVecinosVivos(int tablero[N][M],int fila,int columna) {
    int conteo = 0;
    for (int i =fila-1;i<=fila+1;i++) {
        for (int j= columna-1;j<= columna + 1;j++) {
            if (i >=0 && i <N && j >= 0 && j<M && !(i==fila && j==columna)) {
                conteo+= tablero[i][j];
            }
        }
    }
    return conteo;
}

void siguienteGeneracion(int tablero[N][M],int nuevoTablero[N][M]) {
    for (int i= 0;i < N;i++) {
        for (int j= 0;j< M;j++) {
            int vecinosVivos= contarVecinosVivos(tablero, i, j);
            if (tablero[i][j] == 1) {
                if (vecinosVivos< 2 || vecinosVivos >3) {
                    nuevoTablero[i][j]= 0; 
                } else {
                    nuevoTablero[i][j]= 1; 
                }
            } else {
                if (vecinosVivos== 3) {
                    nuevoTablero[i][j]= 1;
                } else {
                    nuevoTablero[i][j]= 0; 
                }
            }
        }
    }
}

int main() {
    int tablero[N][M];
    int nuevoTablero[N][M];
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            tablero[i][j]=rand() % 2;  
        }
    }
    cout <<"Tablero inicial:" << endl;
    mostrarTablero(tablero);
    siguienteGeneracion(tablero, nuevoTablero);
    cout <<"Segunda generacion:" << endl;
    mostrarTablero(nuevoTablero);

    return 0;
}
