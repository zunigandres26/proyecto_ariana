#include <iostream>
#include <fstream>
using namespace std;

void readMatrix(double [],int &, int &,char []);

int main(){
	int nrows, ncols;
	double A[100*100];
	readMatrix(A,nrows,ncols,"matriz.txt");
	cout<<"Numero de filas: "<<nrows<<endl;
	cout<<"Numero de columnas: "<<ncols<<endl;
	
	for(int i=0;i<nrows*ncols;i++){
		cout<<A[i]<<"\t";
	}
	
	
	return 0;
}

void readMatrix(double M[],int &nrows, int &ncols,char filename[]){
	ifstream file (filename);
	file >> nrows;
	file >> ncols; 
	for(int i=0;i<nrows*ncols;i++){
		file >> M[i];
	}
}

