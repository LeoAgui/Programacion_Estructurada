#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i=0,n,suma=0,prom;
	printf("Dame un numero entero:\n");
	scanf("%d",&n);
    while (n>=0){
    	i++;
    	suma=suma+n;
		printf("Dame un numero entero:\n");
	    scanf("%d",&n);
	}
	prom=suma/i;
	printf("La suma de los numeros es:%d\n",suma);
	printf("El promedio de los numeros es:%d\n",prom);
		printf("Fin");
	return 0;
}
