#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Leonardo Jaime Aguirre Donjuan 1897714 */
int main(int argc, char *argv[]) {
int fibbonacci(int n); 
int main() {

int num=0;
printf("\n Ingrese un numero: ");
scanf("%d",&num);

int Ans=num+fibonacci(num);
printf("\n %d + %d = %d",num,fibonacci(num),Ans);
	return 0;
}
int fibonacci (int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{	
	return (fibonacci(n-1) + fibonacci(n-2));
	}
}
	return 0;
}
