#include <iostream>
#include <fstream>
using namespace std;

void readMatrix(double [],int &, int &,char []);
void WriteOnFile(char []);
void WriteArray(double [], int , int );
void multiplicacionMatrices(int );


int main(){
	int nrows = 4, ncols = 4;
	double A[4*4];
	double B[4*4];
	
	readMatrix(A,nrows,ncols,"matrizA.txt");
	readMatrix(B,nrows,ncols,"matrizB.txt");

	cout<<"Numero de filas: "<<nrows<<endl;
	cout<<"Numero de columnas: "<<ncols<<endl;
	
	for(int i=0;i<nrows*ncols;i++){
		cout<<A[i]<<"\t";
	}
	return 0;
}

void multiplicacionMatrices(int n){
	if (n == 1){

	}
	else{
		WriteOnFile("las dimensiones de las matrices no permiten efectuar la multiplicacion");
	}
}

void WriteArray(double C[], int nrows, int ncols){
	ofstream archivo;
	archivo.open("matrizAB.txt");
	archivo<<nrows<<endl;
	archivo<<ncols<<endl;
	for(int i=0; i<nrows; i++){
		for(int j=0; j<ncols; j++){
			archivo<<C[i*ncols+j]<<" ";
		}
		archivo<<endl;
	}
}

void WriteOnFile(char msj[]){
	ofstream archivo;
	archivo.open("matrizAB.txt");
	archivo<<msj<<".";
}

void readMatrix(double M[],int &nrows, int &ncols, char filename[]){
	ifstream file (filename);
	file >> nrows;
	file >> ncols; 
	for(int i=0;i<nrows*ncols;i++){
		file >> M[i];
	}
}

