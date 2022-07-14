#include <stdio.h>
//De antemano decir que la "funcion" victoria, debería ir después de cada jugada, pero eso sería repetir todas las posibles victorias,
//y el código quedaría más extenso y desordenado aún, ya que a pesar de llamarse funcion victoria, no lo quise hacer como función
//ya que no lo hemos pasado en el ramo, y solo lo hice con ciclos if, entonces para no estar revisando jugada a jugada, solo puse
//las condiciones de victorias cada 2 jugadas. 

main(){
	char a[3][3]={'a','b','c','d','e','f','g','h','i'}, x = 'X', o = 'O'; //Muestra el tablero y compara para posicionar
	char p1, p2, p3, p4, p5, p6, p7, p8, p9;							  // Son las Jugadas de cada jugador, siendo las impares para X y las pares para O
	char nombre[15];
	int i=0, j=0, ganador = 0;
	
	printf("Bienvenidos al Juego del Tic Tac Toe (Gato) \n");
	printf("\n");
	printf("Instrucciones: Cada uno de los jugadores, deberan ingresar una letra como coordenada\n");
	printf(" 	       para que su simbolo predeterminado aparezca en el tablero (X/O)\n");	
	printf("\n");
	printf("Las coordenadas son las siguientes: \n");
	printf(" \n");
	printf(" a | b | c \n");
	printf("\n");
	printf(" d | e | f \n");
	printf("\n");
	printf(" g | h | i \n");
	printf("\n");
	
	
	//Coordenadas posicionamiento
	printf("Jugador 1 Elige una coordenada: ");
	scanf(" %c", &p1);
	printf("Jugador 2 Elige una coordenada: ");
	scanf(" %c", &p2);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j] == p1){
            	a[i][j] = x;
        	}
        	if(a[i][j] == p2){
        		a[i][j] = o;
			}
		} 
	}
	//Print del Gato
		printf("%c %c %c \n", a[0][0], a[0][1], a[0][2]);
		printf("%c %c %c \n", a[1][0], a[1][1], a[1][2]);
		printf("%c %c %c \n", a[2][0], a[2][1], a[2][2]);

	//Coordenadas posicionamiento	
	printf("Jugador 1 Elige una coordenada: ");
	scanf(" %c", &p3);
	printf("Jugador 2 Elige una coordenada: ");
	scanf(" %c", &p4);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j] == p3){
            	a[i][j] = x;
        	}
        	if(a[i][j] == p4){
        		a[i][j] = o;
			}
		} 
	}
	//Print del Gato
		printf(" %c %c %c \n", a[0][0], a[0][1], a[0][2]);
		printf(" %c %c %c \n", a[1][0], a[1][1], a[1][2]);
		printf(" %c %c %c \n", a[2][0], a[2][1], a[2][2]);
		
	
	//Coordenadas posicionamiento
	printf("Jugador 1 Elige una coordenada: ");
	scanf(" %c", &p5);
	printf("Jugador 2 Elige una coordenada: ");
	scanf(" %c", &p6);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j] == p5){
            	a[i][j] = x;
        	}
        	if(a[i][j] == p6){
        		a[i][j] = o;
			}
		} 
	}
		//Funcion de Victoria: Comienzan desde la jugada 5 ya que puede ser la ganadora, con 4 jugadas aún no existe ganador.
		//Lo haría con una funcion y simplemente llamándola para que el código no quedase tan desordenado, 
		//pero como no lo hemos visto en el ramo, decidí hacerlo sin funcion y solo con if.

		//Victorias Verticales
		if(a[0][0] == x && a[1][0] == x && a[2][0] == x || 
			a[0][1] == x && a[1][1] == x && a[2][1] == x || 
			a[0][2] == x && a[1][2] == x && a[2][2] == x || 
			a[0][0] == o && a[1][0] == o && a[2][0] == o || 
			a[0][1] == o && a[1][1] == o && a[2][1] == o || 
			a[0][2] == o && a[1][2] == o && a[2][2] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		
		//Victorias Horizontales
		if(a[0][0] == x && a[0][1] == x && a[0][2] == x || 
			a[1][0] == x && a[1][1] == x && a[1][2] == x || 
			a[2][0] == x && a[2][1] == x && a[2][2] == x || 
			a[0][0] == o && a[0][1] == o && a[0][2] == o || 
			a[1][0] == o && a[1][1] == o && a[1][2] == o || 
			a[2][0] == o && a[2][1] == o && a[2][2] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		
		//Victorias Diagonales
		if(a[0][0] == x && a[1][1] == x && a[2][2] == x || 
			a[0][2] == x && a[1][1] == x && a[2][0] == x || 
			a[0][0] == o && a[1][1] == o && a[2][2] == o || 
			a[0][2] == o && a[1][1] == o && a[2][0] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		
	//Print del Gato
		printf(" %c %c %c \n", a[0][0], a[0][1], a[0][2]);
		printf(" %c %c %c \n", a[1][0], a[1][1], a[1][2]);
		printf(" %c %c %c \n", a[2][0], a[2][1], a[2][2]);
		
		if(ganador = 1){
		return 0;
		}
	
	//Coordenadas posicionamiento
	printf("Jugador 1 Elige una coordenada: ");
	scanf(" %c", &p7);
	printf("Jugador 2 Elige una coordenada: ");
	scanf(" %c", &p8);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j] == p7){
            	a[i][j] = x;
        	}
        	if(a[i][j] == p8){
        		a[i][j] = o;
			}
		} 
	}
	
		//Funcion de Victoria Vertical
		if(a[0][0] == x && a[1][0] == x && a[2][0] == x || 
			a[0][1] == x && a[1][1] == x && a[2][1] == x || 
			a[0][2] == x && a[1][2] == x && a[2][2] == x || 
			a[0][0] == o && a[1][0] == o && a[2][0] == o || 
			a[0][1] == o && a[1][1] == o && a[2][1] == o || 
			a[0][2] == o && a[1][2] == o && a[2][2] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		//Victorias Horizontales
		if(a[0][0] == x && a[0][1] == x && a[0][2] == x || 
			a[1][0] == x && a[1][1] == x && a[1][2] == x || 
			a[2][0] == x && a[2][1] == x && a[2][2] == x || 
			a[0][0] == o && a[0][1] == o && a[0][2] == o || 
			a[1][0] == o && a[1][1] == o && a[1][2] == o || 
			a[2][0] == o && a[2][1] == o && a[2][2] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		
		//Victorias Diagonales
		if(a[0][0] == x && a[1][1] == x && a[2][2] == x || 
			a[0][2] == x && a[1][1] == x && a[2][0] == x || 
			a[0][0] == o && a[1][1] == o && a[2][2] == o || 
			a[0][2] == o && a[1][1] == o && a[2][0] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
	
	//Print del Gato
		printf(" %c %c %c \n", a[0][0], a[0][1], a[0][2]);
		printf(" %c %c %c \n", a[1][0], a[1][1], a[1][2]);
		printf(" %c %c %c \n", a[2][0], a[2][1], a[2][2]);
	
		if(ganador = 1){
			return 0;
		}
	
	//Coordenadas posicionamiento
	printf("Jugador 1 Elige una coordenada: ");
	scanf(" %c", &p9);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j] == p9){
            	a[i][j] = x;
        	}
		} 
	}
	
		//Funcion de Victoria Vertical
		if(a[0][0] == x && a[1][0] == x && a[2][0] == x || 
			a[0][1] == x && a[1][1] == x && a[2][1] == x || 
			a[0][2] == x && a[1][2] == x && a[2][2] == x || 
			a[0][0] == o && a[1][0] == o && a[2][0] == o || 
			a[0][1] == o && a[1][1] == o && a[2][1] == o || 
			a[0][2] == o && a[1][2] == o && a[2][2] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		//Victorias Horizontales
		if(a[0][0] == x && a[0][1] == x && a[0][2] == x || 
			a[1][0] == x && a[1][1] == x && a[1][2] == x || 
			a[2][0] == x && a[2][1] == x && a[2][2] == x || 
			a[0][0] == o && a[0][1] == o && a[0][2] == o || 
			a[1][0] == o && a[1][1] == o && a[1][2] == o || 
			a[2][0] == o && a[2][1] == o && a[2][2] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		
		//Victorias Diagonales
		if(a[0][0] == x && a[1][1] == x && a[2][2] == x || 
			a[0][2] == x && a[1][1] == x && a[2][0] == x || 
			a[0][0] == o && a[1][1] == o && a[2][2] == o || 
			a[0][2] == o && a[1][1] == o && a[2][0] == o ){
				printf("\nTenemos un ganador! \n");
				ganador = 1;
		}
		
	//Print del Gato
		printf(" %c %c %c \n", a[0][0], a[0][1], a[0][2]);
		printf(" %c %c %c \n", a[1][0], a[1][1], a[1][2]);
		printf(" %c %c %c \n", a[2][0], a[2][1], a[2][2]);
	
	if(ganador = 1){
		return 0;
	}
}
	

