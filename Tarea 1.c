#include <stdio.h>
#include <stdlib.h>
int opc, tipo, i = 3, pos;
char codigobuscar[10];

union todos{
struct LIBROS
{
    char CODIGO[10];
    char AUTOR[30];
    char TITULO[20];
    char EDITORIAL[15];
    int YEAR;
    
}libros1;

struct REVISTAS
{
    char CODIGO[10];
    char NOMBRE[20];
    char MES[11];
    int YEAR; 
    
}revistas1;


struct PELICULAS
{
    char CODIGO[10];
    char TITULO[30];
    char DIRECTOR[20];
    char PRODUCTORA[15];
    int YEAR;
    
} peliculas1;

}uniondetodos[100];

int menu()
{
  printf("Hola! Elige la opción que deseas utilizar\n");
  printf("1 - Escanear \n");
  printf("2 - Mostrar \n");
  printf("3 - Buscar\n");
  printf("4 - Salir\n");
  return 0;
}

int opcion(opc){
scanf("%d", &opc);
    switch(opc){
      case 1: 
          EscanearSeleccionarTipo();
          break;
      case 2: 
      	    Mostrar();
      	  	break;
      case 3:
      	  Buscar();
      	  break;
      case 4:
          exit(0);
          break;
      default: 
          printf("\nEsa no es una opción válida, reinicia el programa.");
    }
}



int main(){
system("cls");
menu();
opcion();
return 0;
}




int EscanearSeleccionarTipo(){
  system("cls");
  printf("Elige el tipo de elemento que deseas escanear");
  printf("\n1 - Libros");
  printf("\n2 - Revistas");
  printf("\n3 - Peliculas\n");
  fflush(stdin);
  scanf("%d", &tipo);
  switch(tipo){
  	case 1:
  		ScanLibros();
  		break;
  	case 2:
  		ScanRevistas();
		  break;
	case 3: ScanPeliculas();
		break;
		  }
}



int ScanRevistas(){
  printf("En cual de los 100 slots desea guardar la informacion 0-99?\n");
  scanf("%d", &pos);
  system("cls");
  printf("Registrando datos de revista:\n");
  printf("Codigo:");
  fflush(stdin);
  gets(uniondetodos[pos].revistas1.CODIGO);
  printf("Nombre:");
  fflush(stdin);
  gets(uniondetodos[pos].revistas1.NOMBRE);
  printf("Mes:");
  fflush(stdin);
  gets(uniondetodos[pos].revistas1.MES);
  printf("Year:");
  fflush(stdin);
  scanf("%d", &uniondetodos[pos].revistas1.YEAR);
  main();
} 

int ScanLibros(){
  printf("En cual de los 100 slots desea guardar la informacion 0-99?\n");
  scanf("%d", &pos);
  system("cls");
  printf("Registrando datos de Libro:\n");
  printf("Codigo:");
  fflush(stdin);
  gets(uniondetodos[pos].libros1.CODIGO);
  printf("Autor:");
  fflush(stdin);
  gets(uniondetodos[pos].libros1.AUTOR);
  printf("Titulo:");
  fflush(stdin);
  gets(uniondetodos[pos].libros1.TITULO);
  printf("Editorial:");
  fflush(stdin);
  gets(uniondetodos[pos].libros1.EDITORIAL);
  printf("Year:");
  fflush(stdin);
  scanf("%d", &uniondetodos[pos].libros1.YEAR);
  main();
  
} 

int ScanPeliculas(){
  printf("En cual de los 100 slots desea guardar la informacion 0-99?\n");
  scanf("%d", &pos);
  system("cls");
  printf("Registrando datos de revista:\n");
  printf("Codigo:");
  fflush(stdin);
  gets(uniondetodos[pos].peliculas1.CODIGO);
  printf("Titulo:");
  fflush(stdin);
  gets(uniondetodos[pos].peliculas1.TITULO);
  printf("Director:");
  fflush(stdin);
  gets(uniondetodos[pos].peliculas1.DIRECTOR);
  printf("Productora:");
  fflush(stdin);
  gets(uniondetodos[pos].peliculas1.PRODUCTORA);
  printf("Year:");
  fflush(stdin);
  scanf("%d", &uniondetodos[pos].peliculas1.YEAR);
  main();
} 

int Buscar(){
	system("cls");
  printf("Elige el tipo de elemento que deseas buscar");
  printf("\n1 - Libros");
  printf("\n2 - Revistas");
  printf("\n3 - Peliculas\n");
  fflush(stdin);
  scanf("%d", &tipo);
  switch(tipo){
  	case 1:
  	system("cls");
	printf ("Escribe el codigo del libro que deseas encontrar:\t");
	fflush(stdin);
	gets(codigobuscar);
	for(i=0;i<=99; i++){
		if((strcmp(codigobuscar, uniondetodos[i].libros1.CODIGO)==0 )){
		printf("Los datos se encuentran en la posicion %d del arreglo de union.", i);
		printf("\nCodigo: %s\n", uniondetodos[i].libros1.CODIGO);
		printf("Autor: %s\n", uniondetodos[i].libros1.AUTOR);
		printf("Titulo: %s\n", uniondetodos[i].libros1.TITULO);
		printf("Editorial: %s\n", uniondetodos[i].libros1.EDITORIAL);
		printf("Year: %d\n", uniondetodos[i].libros1.YEAR);
		getch();
		main();
		}
	}
	break;
  	case 2:
  	system("cls");
	printf ("Escribe el codigo de la revista que deseas encontrar:\t");
	fflush(stdin);
	gets(codigobuscar);
	for(i=0;i<=99; i++){
		if((strcmp(codigobuscar, uniondetodos[i].revistas1.CODIGO)==0 )){
		printf("Los datos se encuentran en la posicion %d del arreglo de union.", i);
		printf("\nCodigo: %s\n", uniondetodos[i].revistas1.CODIGO);
		printf("Nombre: %s\n", uniondetodos[i].revistas1.NOMBRE);
		printf("Mes: %s\n", uniondetodos[i].revistas1.MES);
		printf("Year: %d\n", uniondetodos[i].revistas1.YEAR);
		getch();
		main();
		}
	}
		  break;
	case 3: 
  	system("cls");
	printf ("Escribe el codigo de la pelicula que deseas encontrar:\t");
	fflush(stdin);
	gets(codigobuscar);
	for(i=0;i<=99; i++){
		if((strcmp(codigobuscar, uniondetodos[i].peliculas1.CODIGO)==0 )){
		printf("Los datos se encuentran en la posicion %d del arreglo de union.", i);
		printf("\nCodigo: %s\n", uniondetodos[i].peliculas1.CODIGO);
		printf("Titulo: %s\n", uniondetodos[i].peliculas1.TITULO);
		printf("Director: %s\n", uniondetodos[i].peliculas1.DIRECTOR);
		printf("Productora: %s\n", uniondetodos[i].peliculas1.PRODUCTORA);
		printf("Year: %d\n", uniondetodos[i].peliculas1.YEAR);
		getch();
		main();
		}
	}
	break;
		  }

}


int Mostrar(){
  system("cls");
  printf("Elige el tipo de elemento que deseas mostrar");
  printf("\n1 - Libros");
  printf("\n2 - Revistas");
  printf("\n3 - Peliculas\n");
  fflush(stdin);
  scanf("%d", &tipo);
  switch(tipo){
  	case 1:
  		printf ("\nQue posicion del elemento libros desea encontrar?");
		scanf("%d", &i);
		printf("Mostrando datos de la posicion %d del arreglo de union.", i);
		printf("\nCodigo: %s\n", uniondetodos[i].libros1.CODIGO);
		printf("Nombre: %s\n", uniondetodos[i].libros1.AUTOR);
		printf("Mes: %s\n", uniondetodos[i].libros1.TITULO);
		printf("Editorial: %s\n", uniondetodos[i].libros1.EDITORIAL);
		printf("Year: %d\n", uniondetodos[i].libros1.YEAR);
		getch();
		main();
  		break;
  	case 2:
  		printf ("\nQue posicion del elemento revistas desea encontrar?");
		scanf("%d", &i);
		printf("Mostrando datos de la posicion %d del arreglo de union.", i);
		printf("\nCodigo: %s\n", uniondetodos[i].revistas1.CODIGO);
		printf("Nombre: %s\n", uniondetodos[i].revistas1.NOMBRE);
		printf("Mes: %s\n", uniondetodos[i].revistas1.MES);
		printf("Year: %d\n", uniondetodos[i].revistas1.YEAR);
		getch();
		main();
		  break;
	case 3: 
  		printf ("\nQue posicion del elemento peliculas desea encontrar?");
		scanf("%d", &i);
		printf("Mostrando datos de la posicion %d del arreglo de union.", i);
		printf("\nCodigo: %s\n", uniondetodos[i].peliculas1.CODIGO);
		printf("Titulo: %s\n", uniondetodos[i].peliculas1.TITULO);
		printf("Director: %s\n", uniondetodos[i].peliculas1.DIRECTOR);
		printf("Productora: %s\n", uniondetodos[i].peliculas1.PRODUCTORA);
		printf("Year: %d\n", uniondetodos[i].peliculas1.YEAR);
		getch();
		main();
  		break;
		break;
		  }

		
	
}

