#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int v[10];
	int i;
	int j;
	int t;
	
	for(i=0;i<10;i++)
	{
		printf("Digite %d\370 valor:\n", i+1);
		scanf("%d",&v[i]);
		
	}
	
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(v[i]>v[j])
			{
			t=v[i];
			v[i]=v[j];
			v[j]=t;
				
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\370 valor:%d\n", i+1,v[i]);
		
	}
	system("pause");
	return 0;
}
