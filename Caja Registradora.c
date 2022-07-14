// Programa caja registradora
#include <stdio.h>

int main(){
	int sub = 0, cont, p, d, v, i;
	printf("Ingrese cuantos productos lleva \n");
	scanf("%d", &cont);
	for(i = 1; i <= cont; i++){
		printf("Ingresa el precio del producto \n");
		scanf("%d", &p);
		sub = sub + p;
	}
	printf("el subtotal es: %i \n", sub);
	printf("¿Con cuanto dinero pagara? \n");
	scanf("%d", &d);
	if(d <= sub){
		printf("Necesita mas dinero para comprar \n");
	}else{
		v = d - sub;
		printf(" Total a pagar: %d \n Dinero a utilizar: %d \n Vuelto: %d \n", sub, d, v);
	}
	printf("Gracias por su preferencia");
	

}
