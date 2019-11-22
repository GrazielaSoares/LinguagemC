#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float p1;
	float p2;
	float media;
	
    printf("Digite a primeira nota:\n");
    scanf("%f", &p1);
    printf("Digite a segunda nota:\n");
	scanf("%f", &p2);
	
	media=(p1+p2)/2;
	
	printf("A media da nota e: %f\n", media);	
	   
	   
	if(media>=7)
	{
		printf("O aluno foi aprovado!\n");
	}
	else
	{
		if(media>=6)
		{
			printf("O aluno esta de recuperacao\n");
		}
		else
		{
		    printf("reprovado\n");	
		}
	}
	   
    system("pause"); 
	return 0;
}
