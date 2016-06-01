#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nAlCuadrado(void);
void factorial(void);
void nElevado(void);
void nAlCubo(void);
void raizcubica(void);
void logaritmo(void);
void DiezElevadoAlaX(void);
void RaizDeX(void);
void Salir(void);
int op;

int main(){
	int opc, x;
	
	do {
	system("cls");	
	printf("Bienvienido a la calculadora cientifica\n");	
	printf("1) Numero al cuadrado\n");
	printf("2) Factorial de un numero \n");
	printf("3) Numero elevado a otro numero \n");
	printf("4) Numero al cubo \n");
	printf("5) Raiz \n");
	printf("6) Logaritmo comun de un numero\n");
	printf("7) 10 Elevado a la x \n");
	printf("8) Raiz de un numero\n");
	printf("9) Salir\n");
	printf("Elija la opcion que desea usar \n");
	scanf("%d",&opc);
	
	switch(opc){
		case 1:
			nAlCuadrado();
			break;
		case 2:
			factorial();
			break;
		case 3:
			nElevado();
			break;
		case 4:
			nAlCubo();
			break;
		case 5:
			raizcubica();
			break;
		case 6:
			logaritmo();
			break;
		case 7:
			DiezElevadoAlaX();
			break;
		case 8:
			RaizDeX();
			break;
		case 9:
			Salir();
			break;
		default:
			printf("Opcion no valida");
			break;	
				
				
			
					
	  
	}
	
	}while(op==1 || opc==10);
}


void nAlCuadrado(){
	float num1,resp;
	
	printf("Ingrese el numero que desea eleva al cuadrado: ");
	scanf("%f", &num1);
	resp=pow(num1,2);
	printf("El numero elevado al cuadrado es: %f\n", resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
	
}

void factorial(){
	int num1,i;
	int factorial=1;
	
	printf("Ingrese el numero que desea sacar el factorial\n");
	scanf("%d", &num1);
	for(i=1;i<=num1;i++){
		factorial=factorial*i;
	}
	printf("El factorial del numero %d es: %d\n", num1,factorial);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
	
}


void nElevado(){
	float num1, num2, resp;
	
	printf("Ingrese el numero que desea elevar: ");
	scanf("%f", &num1);
	printf("Ingrese la potencia: ");
	scanf("%f", &num2);
	resp=pow(num1,num2);
	printf("El numero elevado es: %f\n", resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
}


void nAlCubo(){
	float num1,resp;
	
	printf("Ingrese el numero que desea elevar al cubo: ");
	scanf("%f", &num1);
	resp=pow(num1,3);
	printf("El numero elevado al cubo es: %f\n", resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
}


void raizcubica(void){
	float a, resp;
	printf("Ingrese el numero del cual desea saber la raiz cubica: ");
	scanf("%f",&a);
	resp= pow(a,1.00/3.00);
	printf("La raiz es: %.2f \n",resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
}

void logaritmo(){
	float x, resp;
	printf("Ingrese el numero: ");
	scanf("%f",&x);
	resp=log10(x);
	printf("El logaritmo de %f es: %f\n",x,resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
}

void DiezElevadoAlaX(){
	float x,resp;
	printf("Ingrese la potencia: ");
	scanf("%f", &x);
	resp=pow(10,x);
	printf("La respuesta es: %.2f\n", resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
	
}

void RaizDeX(){
	float num1,num2,resp;
	printf("Ingrese el numero del cual desea saber la raiz: ");
	scanf("%f", &num1);
	printf("Ingrese el tamaño de la raiz: ");
	scanf("%f", &num2);
	resp=pow(num1,1.00/num2);
	printf("La raiz es: %f\n", resp);
	printf("Desea seguir usando la calculadora presione 1 sino presione 2 \n");
	scanf("%d",&op);
}

void Salir(){
	printf("Gracias por utilizar esta programa\n");
	
}
