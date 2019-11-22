#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int valores[10];
	int i;
	int soma=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o %d\370 valor:",i+1);
		scanf("%d",&valores[i]);
	
	}
	
	for(i=0;i<10;i++)
	{
		if(valores[i]%2==0)
		{
			soma=soma+valores[i];	
		}
	
	}
	
	printf("A soma dos numeros pares digitados e: %d", soma);
	
	return 0;
}
