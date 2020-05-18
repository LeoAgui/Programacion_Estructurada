#include <stdio.h>
#include <stdlib.h>
/*Practica 8*/
/*Leoanrdo Jaime Aguirre Donjuan 1897714*/
int main(int argc, char *argv[])
{
  int mat[3][3], mate[3][3],i,j,ce;
  printf("Hola usuario\n");
  for(i=0;i<3;i++)
  for(j=0;j<3;j++){
      printf("Dame la cantidad de la posicion: %d,%d", i+1,j+1);
      scanf("%d",&mat[i][j]);
      }
      system("cls");
      for(i=0;i<3;i++){
      for(j=0;j<3;j++){
      printf("%4d",mat[i][j]);
      }
      printf("\n");
      }
      printf("Dame la cantidad escalar:");
      scanf("%d",&ce);
      for(i=0;i<3;i++){
      for(j=0;j<3;j++){
      printf("%4d",mat[i][j],ce);
      }
      printf("\n");
      }    
  return 0;
}
