#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Leonardo Jaime Aguirre Donjuan 1897714 */
int main(int argc, char *argv[]) {
	int i,j,a,mat[10];
	char alumnos[10][9][100];
	printf("Bienvenido\n");
	
	
	for(i=0;i<10;i++){
		printf("\nIngrese la matricula del estudiante %d ",i+1);
		scanf("%s",&alumnos[i][0]);
		mat[i]=alumnos[i][0] -'0';
		printf("%d",mat[i]);
		if(i>0){
		for(a=0;a<10;a++){
			if(mat[i]==mat[a]){
				printf("Matricula ya ingresada, intente de nuevo  ");
				scanf("%s",&alumnos[i][0]);
			}
		}
	}
		printf("\nIngrese el nombre del estudiante:  ");
		scanf("%s",&alumnos[i][1]);
		printf("\nIngrese el primer apellido del estudiante:  ");
		scanf("%s",&alumnos[i][2]);
		printf("\nIngrese el segundo apellido del estudiante:  ");
		scanf("%s",&alumnos[i][3]);	
		printf("\nIngrese la fecha de nacimiento del estudiante dd/mm/aaaa:  ");
		scanf("%s",&alumnos[i][4]);
		printf("\nIngrese el nombre de la facultad del estudiante:  ");
		scanf("%s",&alumnos[i][5]);
		printf("\nIngrese el semestre del estudiante:  ");
		scanf("%s",&alumnos[i][6]);
		printf("\nIngrese la carrera del estudiante:  ");
		scanf("%s",&alumnos[i][7]);
		printf("\nIngrese el genero del estudiante F-femenino M-masculino:  ");
		scanf("%s",&alumnos[i][8]);
		
		system("cls");
	}
	printf("Matricula\tNombre\t\tApellido_Paterno\tApellido_Materno\tFecha_de_Naciemiento\tFacultad\tSemestre\t\tCarrera\t\tSexo\n");
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
		printf(" %10s\t",alumnos[i][j]);
		}
	printf("\n");
	}
	return 0;
}
