#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,s,r,m,d;
	char cc;
	printf("Ingrese un numero:");
	scanf(" %f",&a);
	printf("\nIngrese un numero:");
	scanf(" %f",&b);
	printf("\nIngrese simbolo de operacion:\n+para sumar\n -para restar\n *para multiplicar\n /para dividir");
	scanf(" %c",&cc);
	switch(cc){
		case'+': s=a+b;
		printf("\nLa suma de los numeros es:%f",s);
		break;
		case'-': r=a-b;
		printf("\nLa resta de los numeros es:%f",r);
		break;
		case'*': m=a*b;
		printf("\nLa multiplicacion de los numeros es:%f",m);
		break;
		case'/': d=a/b;
		printf("\nLa division de los numeros es:%f",d);
		break;
		default:printf("Syntax error");
	}
	return 0;
}
