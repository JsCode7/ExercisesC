//Escriba un programa que seg�n un n�mero ingresado por el usuario,
// imprima por pantalla a qu� d�a de la semana corresponde
#include <stdio.h>
main(){
	int n,l=1,m=2,mi=3,j=4,v=5,s=6,d=7;
	printf("Ingrese un numero del 1 al 7 para mostrar el dia que corresponde:");
	scanf("%d", &n);
	if(n == l){
		printf("El dia seleccionado es Lunes");
	}
	else if(n == 2){
		printf("El dia seleccionado es Martes");
	}
	else if(n == 3){
		printf("El dia seleccionado es Mi�rcoles");
	}
	else if(n == 4){
		printf("El dia seleccionado es Jueves");
	}
	else if(n == 5){
		printf("El dia seleccionado es Viernes");
	}
	else if(n == 6){
		printf("El dia seleccionado es S�bado");
	}
	else if(n == 7){
		printf("El dia seleccionado es Domingo");
	}
	else{
		printf("No existe dia para ese numero bro");
	}
	
}
