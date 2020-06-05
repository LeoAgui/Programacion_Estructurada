#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Leonardo Jaime Aguirre Donjuan 1897714*/

int main(int argc, char *argv[]) {
	struct Alumnos{
	int id;
	char first_name[30];
	char second_name[30];
	char last_name[30];
	char sec_last_name[30];
	char bday[30];
	char escuela[30];
	int semestre[30];
	char carrera [30];
	char genero [30];
};

int main() {
int num_alumnos, condicion_nombre,i, j,num_ids=-1;

struct Alumnos  alu[100];
printf ("Cuantos alumnos hay?: ");
scanf ("%d",&num_alumnos);
for (i=0; i<num_alumnos; i++){
		printf ("\nIngresa por favor tu id: \n");
		scanf ("%d", &alu[i].id);
		num_ids++;
		fflush(stdin);
				do{
			for (j=0; j<num_ids; j++){
				if (alu[j+1].id==alu[j].id){
					printf ("Numero de id invalido");
					printf ("\nIngresa por favor tu id: \n");
					scanf ("%d", &alu[j+1].id);
				
				}
			}
		}
				while(alu[i].id==alu[i-1].id);
				
		printf ("\nIngresa tu nombre: \n");
		scanf ("%s", &alu[i].first_name);
		fflush(stdin);
		printf ("\nIngresa tu apellido: \n");
		scanf ("%s", &alu[i].last_name);
		fflush(stdin);
		printf ("\nIngresa tu segundo apellido: \n");
		scanf ("%s", &alu[i].sec_last_name);
		fflush(stdin);
		printf ("\nIngresa tu cumpleaños: \n");
		scanf ("%s", &alu[i].bday);
		fflush(stdin);
		printf ("\nIngresa tu escuela: \n");
		scanf ("%s", &alu[i].escuela);
		fflush(stdin);
		printf ("\nIngresa tu semestre: \n");
		scanf ("%d", &alu[i].semestre);
		fflush(stdin);
		printf ("\nIngresa tu carrera: \n");
		scanf ("%s", &alu[i].carrera);
		fflush(stdin);
		printf ("\nIngresa tu genero: \n");
		scanf ("%s", &alu[i].genero);
		fflush(stdin);
		}
printf("Usuarios registrados");
printf("\n\nID %5s %5s %5s \n","NOMBRE","APELLIDO","SEGUNDO APELLIDO","CUMPLEAÑOS","ESCUELA","SEMESTRE","ESCUELA","CARRERA","GENERO");
for (i=0; i<num_alumnos; i++){
	printf("%d %5s %5s %5s \n",alu[i].id ,alu[i].first_name ,alu[i].last_name ,alu[i].sec_last_name);
}
	return 0;
}
