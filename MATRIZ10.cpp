#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Tablero(int A[][10]) {
    srand(time(0));
    for (int i = 0; i< 10;i++) {
        for (int j = 0;j < 10;j++) {
            A[i][j]=rand() % 2;
        }
    }
}

int ContarMinas(int A[][10], int N, int M) {
    int cont = 0;
    int direccionFila[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int direccionColumna[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i< 8;i++) {
        int dFila = N + direccionFila[i];
        int dColumna = M + direccionColumna[i];
        
        if (dFila >=0 && dFila< 10 && dColumna >=0 && dColumna< 10) {
            cont += A[dFila][dColumna];
        }
    }
    return cont;
}
void TableroFinal(int A[][10], int B[][10]) {
    cout << "Tablero Original:" << endl;
    for (int i = 0; i< 10;i++) {
        for (int j = 0; j < 10;j++) {
            cout << A[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "Tablero con el contador de minas:" << endl;
    for (int i = 0; i <10;i++) {
        for (int j = 0; j< 10;j++) {
            int minasAd = ContarMinas(A, i, j);
            cout<<minasAd << " ";
        }
        cout<< endl;
    }
}

int main() {
    int tablero1[10][10];
    int tablero2[10][10];
    Tablero(tablero1);
    TableroFinal(tablero1, tablero2);

    return 0;
}
