#include <stdio.h>
#include <conio.h>
//Voy a desarrollar un programa con las características del sistema solar.
//Por ahora le agregaré Diámetro - Masa - Distancia del planeta al sol - Composición de la atmósfera.

int main(){
	int c;
	printf("Welcome to solar system app \n");
	printf("----------------------------------- \n");
	printf("Que planeta te interesaria conocer: \n");
	printf("----------------------------------- \n");
	printf("1.Mercurio \n");
	printf("2.Venus \n");
	printf("3.Tierra \n");
	printf("4.Marte \n");
	printf("5.Jupiter \n");
	printf("6.Saturno \n");
	printf("7.Urano \n");
	printf("8.Neptuno \n");
	printf("----------------------------------- \n");
	printf("Ingresa el numero del planeta que deseas conocer: \n");
	printf("----------------------------------- \n");
	//c = getch();
	scanf("%d", &c);	
	
	switch(c){
		case 1: printf("Mercurio \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 4.878 km \n");
				printf("La masa del planeta es: 3,285 x 10^23 kg \n");
				printf("La distancia al sol es: 57,91 millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 2: printf("Venus \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 12.100 km \n");
				printf("La masa del planeta es: 4,867 x 10^24 kg \n");
				printf("La distancia al sol es: 108,2 millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 3: printf("Tierra \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 12.756 km \n");
				printf("La masa del planeta es: 5,972 x 10^24 kg \n");
				printf("La distancia al sol es: 149,6 millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 4: printf("Marte \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 6.787 km \n");
				printf("La masa del planeta es: 6,39 x 10^23 kg \n");
				printf("La distancia al sol es: 227,9 millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 5: printf("Jupiter \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 142.984 km \n");
				printf("La masa del planeta es: 1,898 x 10^27 kg \n");
				printf("La distancia al sol es: 778,5 millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 6: printf("Saturno \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 120.536 km \n");
				printf("La masa del planeta es: 5,683 x 10^26 kg \n");
				printf("La distancia al sol es: 1,434 miles de millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 7: printf("Urano \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 51.108 km \n");
				printf("La masa del planeta es: 8,681 x 10^25 kg \n");
				printf("La distancia al sol es: 2,871 miles de millones km \n ");
				printf("------------------------- \n");
				break;
				
		case 8: printf("Neptuno \n");
				printf("------------------------- \n");
				printf("El diametro ecuatorial del planeta es: 49.538 km \n");
				printf("La masa del planeta es: 1,024 x 10^26 kg \n");
				printf("La distancia al sol es: 4,495 miles de millones km \n ");
				printf("------------------------- \n");
				break;
				
		default: printf("No hay masssss");
		break;
		}
	return 0;
}


