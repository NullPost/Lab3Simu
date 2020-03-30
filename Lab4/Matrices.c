
/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado: gcc Matrices.c -o Matrices
Fecha: Sun Mar 29 22:54:34 CST 2020
Resumen: Opera dos matrices y una constante
Entrada: dos marices y una constante
Salida: a*matA, matA + matB, matA - matB, matA * matB, det(matA), tras(matB)
(matA)^-1, Reduccion de Gauss matA, reduccion de Gauss matB.
*/

//librerias
#include <stdio.h>
#include <math.h>

int main(){
	float matA[3][3];
	float matB[3][3];
	float cons;
	float consmatA[3][3];
	float matSum[3][3];
	float matRes[3][3];
	float matProd[3][3];
	float detA;
	float matAinv[3][3];
	//Leer matA
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Matriz A fila %d, columna %d: ", i + 1, j + 1);
			scanf("%f", &matA[i][j]);
		}
	}

	printf("matA =\n");
	
	//Imprimir matA
	for(int i = 0; i < 3 ; i++){
		printf("   [%.2f, %.2f, %.2f]\n", matA[i][0], matA[i][1], matA[i][2]);
	}
	
	//Leer matB
	for(int i = 0; i < 3; i++){
                 for(int j = 0; j < 3; j++){
                         printf("Matriz B fila %d, columna %d: ", i + 1, j + 1);
                         scanf("%f", &matB[i][j]);
                 }
         }

	 //imprimir matB
	 printf("matB =\n");
         for(int i = 0; i < 3 ; i++){
                 printf("   [%.2f, %.2f, %.2f]\n", matB[i][0], matB[i][1], matB[i][2]);
         }

	 //Leer constante
	 printf("Constante a:");
	 scanf("%f", &cons);
	
	//suma de matrices componente por componente
	for(int i = 0; i<3; i++){
		for(int j = 0; j < 3; j++){
			matSum[i][j] = matA[i][j] + matB[i][j];
		}
	}

	//Multiplicacion por constante a*matA
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			consmatA[i][j] = cons*matA[i][j];			
		}
	}
	
	//impirmir a*matA
	printf("\n\na*matA =\n");
	for(int i = 0; i < 3; i++){
		printf("   [%.2f, %.2f, %.2f]\n", consmatA[i][0], consmatA[i][1], consmatA[i][2]);
	}
	
	//imprimir matA + matB
	printf("\n\nmatA + mat B =\n");
	for(int i = 0; i < 3; i++){
		printf("   [%.2f, %.2f, %.2f]\n", matSum[i][0], matSum[i][1], matSum[i][2]);
	}
	
	//Multiplicacion de matrices
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			float sum = 0;
			for(int k = 0; k < 3; k++){
				sum += matA[i][k]*matB[k][j];
				}
			matProd[i][j] = sum;
			}
		}

	//imprimir matA*matB
	printf("\n\nProducto de matrices matA*matB =\n");
	for(int i = 0; i < 3; i++){
		printf("   [%.2f, %.2f, %.2f]\n", matProd[i][0], matProd[i][1], matProd[i][2]);
	}
	
	//Calculo det(matA)
	detA =    matA[0][0]*(matA[1][1]*matA[2][2] - matA[2][1]*matA[1][2]) 
		- matA[0][1]*(matA[1][0]*matA[2][2] - matA[1][2]*matA[2][0]) 
		+ matA[0][2]*(matA[1][0]*matA[2][1] - matA[1][1]*matA[2][0]);
	
	//imprimir det(matA)
	printf("\n\ndet(matA) = %.2f\n", detA);
	
	//imprimir traspuesta de matB
	printf("\n\n(matB)^t =\n");
	for(int i = 0; i < 3; i++){
		printf("   [%.2f, %.2f, %.2f]\n", matB[0][i], matB[1][i], matB[2][i]);
	}
	//calcular inversa de matA componente por componente
	if(detA != 0){
	matAinv[0][0] = (matA[1][1]*matA[2][2] - matA[1][2]*matA[2][1])/detA;
	matAinv[0][1] = -(matA[0][1]*matA[2][2] - matA[0][2]*matA[2][1])/detA;
	matAinv[0][2] = (matA[0][1]*matA[1][2] - matA[0][2]*matA[1][1])/detA;
	
	matAinv[1][0] = -(matA[1][0]*matA[2][2] - matA[1][2]*matA[2][0])/detA;
	matAinv[1][1] = (matA[0][0]*matA[2][2] - matA[0][2]*matA[2][0])/detA;
	matAinv[1][2] = -(matA[0][0]*matA[1][2] - matA[0][2]*matA[1][0])/detA;
	
	matAinv[2][0] = (matA[1][0]*matA[2][1] - matA[1][1]*matA[2][0])/detA;
	matAinv[2][1] = -(matA[0][0]*matA[2][3] - matA[0][1]*matA[2][0])/detA;
	matAinv[2][2] = (matA[0][0]*matA[1][1] - matA[0][1]*matA[1][0])/detA;
	
	//imprimir inversa de matA
	printf("\n\n(matA)^-1 =\n");
	for(int i = 0; i < 3; i++){
		printf("   [%.2f, %.2f, %.2f]\n", matAinv[i][0], matAinv[i][1], matAinv[i][2]);
		}
	}
	else{
		//imprimir error cuando matA no tenga inversa
		printf("\n\nmatA no tiene inversa\n\n");
	}

}
	

		
