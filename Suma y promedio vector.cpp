#include <stdio.h>

main(){
	int f, mayor, menor;
	float altura[5];
	float suma, promedio;
	
	for(f=0; f<5; f++){
		printf("Ingresa la altura:");
		scanf("%f", &altura[f]);
	}
	suma=0;
	for(f=0; f<5; f++){
		suma=suma+altura[f];
	}
	promedio=suma/5;
	printf("Promedio de alturas:");
	printf("%0.2f", promedio);
	printf("\n");
	
	mayor=0;
	menor=0;
	for(f=0; f<5; f++){
		if(altura[f]>promedio){
			mayor++;
		}
		else{
			if(altura[f]<promedio){
				menor++;
				}	
			}
		}
	printf("Cantidad de personas con altura mayor al promedio: %i \n", mayor);
	printf("Cantidad de personas con altura menor al promedio: %i \n", menor);

	return 0;
}
