#include<bits/stdc++.h>
using namespace std;
int main (){
	int A[6][6] = {
	{1 ,2 ,3 ,4 ,5, 6},
	{4 ,5 ,2 ,3 ,1, 5},
	{0 ,2 ,5 ,4 ,8, 9},
	{6 ,2 ,3 ,5 ,7, 7},
	{9 ,0 ,3 ,10 ,5, 1},
	{4 ,2 ,3 ,8 ,5, 2}
	};
	cout << "Matriz A:"<< endl;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i = 0; i < 6; i++){
		    for(int j = 0; j < 3; j++){
			int aux = A[i][j];
			A[i][j] = A[i][5-j];
			A[i][5-j] = aux;
		}
    }
    cout << "Matriz Reflejada horizontalmente :" << endl;
    for (int i = 0 ; i < 6; i++){
    	for (int j = 0 ; j < 6; j++){
    		cout << A[i][j] << " "; 
		}
		cout << endl;
	}
    return 0;
}