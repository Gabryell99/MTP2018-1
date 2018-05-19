//Otávio Zumpano Cunha Rodrigues
//11721EEL016


#include <stdio.h>

int main()
{
	int i=0, t , op, *p, vet[64];
	p=(int*)texto;
	char *z;
	z=(char*)vet;
	char txt[256];
	do 
	{
		printf("\nDigite:\n\n 1 - Codificar \n 2 - Decodificar \n 3 - Sair do programa \n ");
		scanf("%d", &op);
		getchar();
		switch(op)
		{
			case 1:
				printf("\n\nDigite uma frase para ser codificada: ");
				fgets(txt, 256, stdin);
				while(sizeof(txt) <= p[i])
				{
					printf("\n%d", p[i]);
					i++;
				}
				break;
			case 2:
				for(t=0; t<64; t++)
				{
					vet[t]=0;
				}
				for(t=0; t<64; t++)
				{
					printf("\nDigite um codigo para ser decodificado sendo finalizado com '0': ");
					scanf("%d", &vet[t]);
					if(vet[t] == 0)
					{
						break;
					}
			    }
			    for(t=0; t<sizeof(vet); t++)
			    {
			    	printf("%c", z[t]);
				}
				break;
			case 3:
			    printf("  \nO programa foi encerrado. ");
				break;	
		}
		
	}
	while(op != 3);
	return 0;
}
