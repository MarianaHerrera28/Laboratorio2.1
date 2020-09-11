/* Este programa es para realizar la segunda parte del laboratorio2 de Alse
  Autor:Mariana Herrera y  Karin Lugo 
  Licencia: Comercial
  Versión: 1.0
  */

/* inclusión de librerias */
#include<stdio.h>
#include<string.h>


void ingresar_palabras( char *palabra1, char *palabra2, char *palabra3);
void comparar_palabras ( char *palabra2, char *palabra3);

/* Código principal */
int main (void) // esta es la función principal
{   
	int opcion = 0;
	char bandera = 0;
	char palabra1[10];
	char palabra2[10];
	char palabra3[10];
	printf("Bienvenido a este programa que te permitira realizar distintas opciones dados tres palabras\n");
	printf("Recuerda que debes ingresar mínimo 3 caracteres y máximo 10 caracteres");
	
	do {
		printf ("Selecciona la opcion que deseas realizar\n");
		printf("Menú\n");
		printf("1- Ingresar palabras\n");
		printf("2- Comparar palabras\n");
		printf("3- Mostrar palabras al reves\n");
		printf("4- Concatenar las palabras\n");
		printf("5- Longitud de cada palabra\n");
		printf("6- Mostrar la suma decimal de los caracteres de cada palabra\n");
		printf("7- Salir\n");
		
		do {
			scanf("%d",&opcion);
		}while ( opcion < 1 || opcion > 7);
		
		switch (opcion)
		{
			case 1 : 
					ingresar_palabras( &palabra1, &palabra2, &palabra3);
					break;
			
			case 2:
					comparar_palabras(&palabra2, &palabra3 );
					break;
		/*
			case 3: 
					palabras_reves();
					break;
			case 4:
					concatenar_palabras();
					break; 
			case 5: 
					longitud_palabra();
					break;
			case 6:
					
					suma_palabra();
					break;	
			*/					
		} 
	}while (opcion != 7);
	return 0; 
}	
	
	
void ingresar_palabras( char *palabra1, char *palabra2, char *palabra3)
{
	
	printf("Ingrese la primera palabra\n"); 
	scanf ("%c",&palabra1);
	printf("Ingrese la segunda palabra\n");  
	scanf ("%c",&palabra2);
	printf("Ingrese la tercera palabra\n"); 
	scanf ("%c",&palabra3);
	
}

	
void comparar_palabras ( char *palabra2, char *palabra3)
{
	if (strcmp("palabra1","palabra2")== 0) 
	{
		printf ( "Las palabras son iguales\n");
	}
	else {
		printf("Las palabras son diferentes\n");
	}
}