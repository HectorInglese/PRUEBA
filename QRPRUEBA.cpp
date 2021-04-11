#include <string.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

//Prototipo 
void OP();
void DEL();


//Variables
float **matrizA , **matrizQ , **matrizR , *Z, **U, sum;
int nR , nC,cont ;

int main(){
	
	OP();
	
DEL();
getch();
return 0;
}



void OP(){
	
	/*cout<<"Valor de filas :  ";
	cin>>nR;
	cout<<"Valor de columnas : ";
	cin>>nC;
	*/
	
	nR = 3;
	nC = 4;
	
	
	Z = new float[nC];
	U = new float*[nR];
	matrizA =new float*[nR];
	matrizQ =new float*[nR];
	matrizR =new float*[nR];
	for (int i=0;i<nR;i++){
		matrizA[i] = new float[nC];
		matrizQ[i] = new float[nC];
		matrizR[i] = new float[nC];
		U[i] = new float[nC]; 
	}
	
	cout<<"\n\n";
	for (int i = 0 ; i < nR ; i++){
		for (int j = 0 ; j <nC; j++ ){
			
			cont = cont + 1;	
			matrizA[i][j] = cont ;
			
		}
	}
	
	for (int i = 0 ; i < nR ; i++){
		for (int j = 0 ; j < nC; j++ ){	
			U[i][j] = matrizA[i][j];

		}
	}
	

	
	cout<<"\n\n VALORES DE A = \n\n";
	for (int i = 0 ; i < nR ; i++){
		for (int j = 0 ; j <nC; j++ ){	
			printf ("%11.1f",matrizA[i][j]); 
		}
		cout<<"\n";
	}
	
	cout<<"\n\n VALORES DE U = \n\n";
    for(int i=0;i<nC;i++) {
        for(int j=0;j<nR;j++){
        	printf ("%11.1f",U[i][j]);   
		}
        cout<<"\n"; 
    }
}
	
	
	

	



void DEL(){
	
	cout<<"\n\n\n\tSALIR";
	for(int i=0;i<nR;i++){		
		delete[] matrizA[i];
		delete[] U[i];
	}
	delete[] matrizA;
	delete[] U;
	
}



