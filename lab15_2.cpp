#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *dPtr, int row, int col) {
    for (short i = 0; i < col; i++) {
        for (short j = 0; j < row; j++) {
           *(dPtr+j) = (rand()%101) / 100.00;
        }
        dPtr++;
    }
}

void findColSum(const double *dPtr, double *result, int row, int col) {
    for (short i = 0; i < col; i++) {
        for (short j = 0; j < row; j++) {
            *(result+j) += *(dPtr+j);
        }
        dPtr++;
    }
}

void showData(double *inputPtr, int row, int col) {
    for (short i = 0; i < row; i++) {
       for (short j = 0; j < col; j++) {
           cout << *(inputPtr+j) << "\t";
        }
        inputPtr++;
        cout << endl;
    }
}