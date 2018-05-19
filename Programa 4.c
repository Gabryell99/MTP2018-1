//Otávio Zumpano Cunha Rodrigues
//11721EEL016


#include <stdio.h>

int main ()
{	
    int n[256], a=0, b, c=0;
	char numero[256];

	printf("Digite um numero: ");
	scanf("%s", &numero);
		
	for(a=0; numero[a] != '\0'; a++)
	{	
	    if(numero[a] >= 48 && numero[a] <= 57)
		{	n[c] = numero[a] - 48;
			c++;	
		}
	}
	b=0;
	printf("Valor de retorno = ");
	do
	{	
	    printf("%d", n[b]);
		b++; 
	}
	while(b<c);
	return 0;
}
