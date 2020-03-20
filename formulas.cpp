//HCLA_P#5
//Luis Alberto Hernandez Cozatl
//07-03-2020
//  Los programas a realizar se van a realizar con funciones de tal manera qu elo realiza una funcion en donde pida los datos para la funcion
// y otro donde realiza las operaciones, vamos a realizar el factorial , se va arealizar la formula general y se va convertir una cadena minuscula a mayuscula.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#include<math.h>
#include<string.h>


int main(void)
{
   int op;

   do{
      system ("cls");
      printf("******************* M E N U ************************\n\n");
	  printf("1.- Factorial\n");
	  printf("2.- Numero validado en un rango\n");
	  printf("3.- Area de un trapecio\n");
	  printf("4.- Formula general\n");
	  printf("5.- Cadena a mayusculas y palindromo\n");
	  printf("6.-Salir\n");
	  printf("\nESCOGE UNA OPCION.\n");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: factorial1();  break;
		  case 2: limites();  break;
		  case 3: trapecio();  break;
		  case 4: formula();  break;
		  case 5: letras(); break;
		}
   }while(op != 6);
}





