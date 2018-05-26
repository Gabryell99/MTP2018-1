//Otávio Zumpano Cunha Rodrigues
//11721EEL016

#include <stdio.h>

int somanum(int vetor[20], int j) 
{
   	int i, soma=0;
   	for (i=0;i<j;i++)
    {
    	soma+=vetor[i];
	}
    return (soma);
}

float media(int soma, float n)
{
	float d;
	d = soma/n;
	return d;
}
  
int main()
{
	
	int num[20],soma,i,qn;
	do
	{
		printf("Com quantos numeros terah seu vetor? (De minimo 5 e maximo 20 )\n");
		scanf("%d",&qn);
	}
	while(qn<5||qn>20);
		
	for(i=0; i<20; i++)
	{
		num[i] = 0;
	}
	for(i=0; i<qn; i++)
	{
		printf("%do numero: ", i+1);
		scanf("%d", &num[i]); 
		getchar();
	}
	soma = (somanum(num, i));
	printf("\n A media dos %d numeros eh : %f",qn, media(soma, qn));
	return 0;
}
