#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Leonardo Jaime Aguirre Donjuan 1897714*/

int main(int argc, char *argv[]) {
	int n=0, cant=0, suma=0;
	float promedio=0;
	
	printf("Hola usuario\n Para salir ingrese -1");
	do{
		printf("\Ingrese un numero");
		scanf("%d",&n);
		suma=suma+n;
		cant++;
	}
	while(n>=0);
		if(n<0){
			suma=suma-n;
			cant--;
		}
	promedio=suma/cant;
	printf("La suma de los numeros es: %d\nLa cantidad de numeros es:%d\nEl promedio de los numeros es:%.2f", suma,cant,promedio);
	return 0;
}
