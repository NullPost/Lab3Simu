
/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado: gcc DosVectores.c -o DosVectores -lm
Fecha: Wed Mar 25 17:42:29 CST 2020
Resumen: pide dos vectores en R3 y muestra operaciones entre ellos
Entrada: dos vectores en R3
Salida:  Magnitudes, suma, producto escalar, producto vectorial
*/

//librerias
#include <stdio.h>
#include <math.h>
float sqrtf(float x);
//numerar los pasos de pseudocodigo
int main(){
	//iniciar variables, una por cada cantidad resultado
	float V[3];
	float W[3];
	float Mv;
	float Mw;
	float VpointW;
	float VplusW[3];
	float VxW[3];
	
	//leer cada vector componente por componente
	printf("Este programa opera dos vectores  en R^3 V y W, el producto vectorial estara dado por V x W.\nEl resto de operaciones es independiente del orden de los vectores \n");
	printf("\nIngrese componente x de V: ");
	scanf("%f", &V[0]);
	printf("Ingrese componente y de V: ");
	scanf("%f", &V[1]);
	printf("Ingrese componente z de V: ");
	scanf("%f", &V[2]);
	//imprimir V
	printf("\nV = (%.2f, %.2f, %.2f)\n", V[0], V[1], V[2]);
	printf("Ingrese componente x de W: ");
	scanf("%f", &W[0]);
	printf("Ingrese componente y de W: ");
	scanf("%f", &W[1]);
	printf("Ingrese componente z de W: ");
	scanf("%f", &W[2]);
	//imprimir W
	printf("\nW = (%.2f, %.2f, %.2f)\n\n", W[0], W[1], W[2]);
	//calcular magnitud V
	Mv = sqrt(V[0]*V[0] + V[1]*V[1] + V[2]*V[2]);
	//calcular magnitud W
	Mw = sqrt(W[0]*W[0] + W[1]*W[1] + W[2]*W[2]);
	//calcular V.W
	VpointW = V[0]*W[0] + V[1]*W[1] + V[2]*W[2];
	for(int i = 0;i < 3; i++){
		VplusW[i] = V[i] + W[i];
	}
	//calcular VxW
	VxW[0] = V[1]*W[2] - V[2]*W[1];
	VxW[1] = V[0]*W[2] - V[2]*W[0];
	VxW[2] = V[0]*W[1] - V[1]*W[0];
	//Imprimir resultados
	printf("Magnitud de V = %.2f \nMagnitud de W = %.2f \n\n", Mv, Mw);
	printf("Producto Escalar V.W = %.2f \n\n", VpointW);
	printf("Suma V + W = (%.2f, %.2f, %.2f)\n\n", VplusW[0], VplusW[1], VplusW[2]);
	printf("Producto Vectorial V x W = (%.2f, %.2f, %.2f)\n\n", VxW[0], VxW[1], VxW[2]);
	return 0;
}
