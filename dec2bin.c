//Programa hecho por Liber Adrián Hernández Abad

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void proceso (long dec);

int main(int argc, char *argv[])
{
	char *apuntador; //Variable que recibe la parte de cadena del arreglo
	long dec; //Variable que recibe la parte numerica del arreglo
	dec=strtol(argv[1],&apuntador,10); //10 es la base
	proceso(dec);
}

void proceso (long dec)
{
	printf("%ld el numero que me diste en binario es: ",dec);
	while (dec!=0)
	{
		if (dec%2==0)
		{
			dec=dec/2;
			printf("0");
		}
		else
		{
			if (dec==1)
			{
				dec=0;
				printf("1");
			}
			else 
			{
				dec=(dec-1)/2;
				printf("1");
			}
		}
	}
	printf("\n");
}
