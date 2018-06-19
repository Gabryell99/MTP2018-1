//Otávio Zumpano Cunha Rodrigues
//11721EEL016

#include <stdio.h>

int main()
{
	int i=0, y , op, *p, vetor[64];
	char *x;
	char texto[256];
	p=(int*)texto;
	x=(char*)vetor;
	do 
	{
		printf("\nDigite: \n\n 1 para codificar \n 2 para decodificar \n 3 sair \n ");
		scanf("%d", &op);
		getchar();
		switch(op)
		{
			case 1:
				printf("\n\nDigite a frase a ser codificada: ");
				fgets(texto, 256, stdin);
				while(sizeof(texto) <= p[i])
				{
					printf("\n%d", p[i]);
					i++;
				}
				break;
			case 2:
				for(y=0; y<64; y++)
				{
					vetor[y]=0;
				}
				for(y=0; y<64; y++)
				{
					printf("\ndigite o codigo a ser decodificado ( com o ultimo sendo '0'): ");
					scanf("%d", &vetor[y]);
					if(vetor[y] == 0)
					{
						break;
					}
			    }
			    printf("\n");
			    for(y=0; y<sizeof(vetor); y++)
			    {
			    	printf("%c", x[y]);
				}
				break;
			case 3:
			    printf("  \nPrograma encerrado. ");
				break;	
		}
		
	}while(op != 3);
	return 0;
}
