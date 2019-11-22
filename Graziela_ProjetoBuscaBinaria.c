#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(int dados[], int tamanho)
{
	int i;
	int j;
	int troca;
	
	for(i=0; i<tamanho-1; i++)
	{
		for(j=i+1;j<tamanho;j++)
		{
			if(dados[i]>dados[j])
			{
				troca=dados[i];
				dados[i]=dados[j];
				dados[j]=troca;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	
	int lista[27014];
	int i;
	int fim;
	int inicio;
	int meio;
	int encontrado;
	int busca; 
	char continua;
	FILE *arquivo;
	
	arquivo= fopen("lista.txt","r");
	
	for(i=0; i<27014; i++)
	{
		//printf("Digite o %d\370 numero:",i+1);
		fscanf(arquivo, "%d",&lista[i]);
	}
	
	bubbleSort(lista,27014);
	
	printf("\n\n");
	
	for(i=0;i<27014;i++)
	{
		printf("%d\n",lista[i]);
		
	}

	continua='s';
	while(continua=='s')
	{
	
		printf("Digite o valor que deseja procurar:\n");
		scanf("%d",&busca);
		encontrado=0;
		inicio=0;
		fim=27013;
		
		while(encontrado==0&&fim>=inicio)
		{
			meio=(inicio+fim)/2;
			if(busca==lista[meio])
			{
				encontrado=1;
				printf("Encontrado na posicao %d\n",meio);
			}
			else if(lista[meio]>busca)
			{
				fim=meio-1;
			}
			else
			{
				inicio=meio+1;
			}
		}
			if(encontrado==0)
			{
				printf("Nao encontrado\n");
			}

		printf("Deseja continuar?s/n\n");
		scanf("%s",&continua);
	}
	
	
	
	
	return 0;
}
