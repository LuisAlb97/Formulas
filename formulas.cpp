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

void factorial1(void);
void limites(void);
void trapecio(void);
void formula(void);
void letras(void);


int factorial(int );
int limite(int sup, int inf);
int area(int , int , int );
void formulaGeneral(float a, float b, float c);
char palindromo(char cad[20]);

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



void factorial1(void)
{
   system ("cls");
   int aux, num=0;

     printf("Ingrese un numero: ");
     scanf("%d", &num);

     aux=factorial(num); //aux guarda el return de la funcion

     printf("El factorial de %d es: %d\n\n", num, aux);
	 system("pause");
}
//   ****************** Funcion en donde se va a realizar la operacion *************
int factorial(int num)
	{
	   long int aux=1, i=1;
	   char c;

	  if(num!= c )
    {
      for(i=1; i<=num; i++)
         {
              aux *=i;
          }

           return aux; //aqui retorna el valor aux a "num" de factorial(int num)
   }
        else
        {
          printf("ERROR. Vuelva a intentarlo\n\n");
           system("pause");
           system("cls");
        }


	}
	




