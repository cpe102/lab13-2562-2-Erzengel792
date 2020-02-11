#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}



void inputMatrix(double A[][N]){

	for(int i = 0 ; i<N ; i++){
		cout << "Row "<<i+1 <<":";
       for(int j = 0 ; j<N ; j++){
		cin >> A[i][j];
	   }
	}
}

void findLocalMax(const double L[][N], bool F[][N]){

	for(int i = 0 ; i<N ;i++){
	    for(int j = 0 ; j<N ; j++){
	if(L[i][j] >= L[i+1][j] && L[i][j] >= L[i-1][j] && L[i][j] >= L[i][j+1] && L[i][j] >= L[i][j-1]) F[i][j] = true;
	else F[i][j] = false;
		}
	     
    }
	for(int i = 0 ;i<N ;i++){
		F[i][0] = false;
		F[i][4] = false;
		for (int j = 0 ; j<N; j++){
			F[0][j] = false;
			F[4][j] = false;
		}
	}
}

void showMatrix(const bool C[][N]){
	for(int i = 0;i<N;i++){
		for(int j = 0; j<N; j++){
			cout<< C[i][j];
		}
		cout<<"\n";
	}
}

