//Otavio Zumpano Cunha Rodrigues
//11721EEl016

#include <stdio.h>

void dec_all(int base)
{
	int resto[100], num, i, j=0, guarda;
	
	printf("\nIndique o valor a ser convertido: ");
	scanf("%d", &num);
	guarda = num;
	
	for(i=0; num >= base; i++)
	{
		resto[i] = num%base;
		num = num/base;
		if(num < base)
		{
			i++;
			resto[i] = num;
		}
	}
	
	i--;
	
	if(base==16)
	{
		printf("\nResultado: ");
		
		if(guarda >= base)
		{
			do
			{
				printf("%X", resto[i]);
				i--;
			}while(i>=0);
			
		}
		
		else if(guarda < base)
		{
			printf("%X", num);
		}
	}
	
	else
	{
		printf("\nResultado: ");
		do
		{
			printf("%d", resto[i]);
			i--;
		}while(i>=0);
		
	}	
	printf("\n\n");
}

void bin_all(int base)
{
	int  resto1[100], resto2[100], num, i, guarda, j=0, n=1, soma=0, k=0;
	char resto[100];

	printf("\nDigite o valor em binario a ser convertido: ");
	scanf("%s", resto);
	for(i=0; resto[i] != '\0'; i++);
	{
		i--;
		k=i;
		do
		{
			if(resto[i] == '0')
			{
				resto1[i] = 0;
			}
			
			else if(resto[i] == '1')
			{
				resto1[i] = 1;
			}
			i--;
		}while(i>=0);
		
		i = k;
		
		do
		{
			for(k=0; k<j; k++)
			{
				n*=2;
			}
			soma += resto1[i]*n;
			n=1;
			i--;
			j++;
		}while(i>=0);
	}
	
	if(base != 16)
	{
		printf("\nResultado: %d", soma);
	}
	
	if(base == 16)
	{
		if(soma >= base)
		{
			for(i=0; soma >= base; i++)
			{
				resto2[i] = soma%base;
				soma = soma/base;
				if(soma < base)
				{
					i++;
					resto2[i] = soma;
				}
			}
			i--;
			
			if(base == 16)
			{
				printf("\nResultado: ");
			do
			{
				printf("%X", resto2[i]);
				i--;
			}while(i>=0);
			}
		}
		
		else
		{
			resto2[i] = soma;
			if(base == 16)
			{
				printf("\nValor convertido: ");
				do
				{
					printf("%X", resto2[i]);
					i--;
				}while(i>=0);
			}
		}
	}
	printf("\n\n");
}

void hex_all(int base)
{
	char resto[100];
	int resto1[100], num, i, guarda, j=0, n=1, soma=0, k=0;
	printf("\nDigite o valor em hexadecimal a ser convertido: ");
	scanf("%s", resto);
	for(i=0; resto[i] != '\0'; i++);
	{
		i--;
		guarda = i;
		k=i;
		do
		{
			if(resto[i] == 'A' || resto[i] == 'a')
			{
				resto[i] = 10;
			}
			else if(resto[i] == 'B' || resto[i] == 'b')
			{
				resto[i] = 11;
			}
			else if(resto[i] == 'C' || resto[i] == 'c')
			{
				resto[i] = 12;
			}
			else if(resto[i] == 'D' || resto[i] == 'd')
			{
				resto[i] = 13;
			}
			else if(resto[i] == 'E' || resto[i] == 'e')
			{
				resto[i] = 14;
			}
			else if(resto[i] == 'F' || resto[i] == 'f')
			{
				resto[i] = 15;
			}
			else
			{
				resto[i] -= 48;
			}
			i--;
		}while(i>=0);
		
		i = guarda;
		do
		{
			for(k=0; k<j; k++)
			{
				n*=16;
			}
			soma += resto[i]*n;
			n=1;
			i--;
			j++;
		}while(i>=0);
	}
	
	if(base != 2)
	{
		printf("\nResultado: %d", soma);
	}
	if(base == 2)
	{
		for(i=0; soma >= base; i++)
		{
			resto[i] = soma%base;
			soma = soma/base;
			if(soma < base)
			{
				i++;
				resto[i] = soma;
			}
		}
		i--;
		printf("\nResultado: ");
		do
		{
			printf("%d", resto[i]);
			i--;
		}while(i>=0);
	}
	printf("\n\n");
}

void oct_dec(int base)
{
	char resto[100];
	int resto1[100], num, i, guarda, j=0, n=1, soma=0, k=0;
	printf("\nDigite o valor em octal a ser convertido: ");
	scanf("%s", resto);
	for(i=0; resto[i] != '\0'; i++);
	{
		i--;
		guarda = i;
		k=i;
		
		do
		{
			resto[i] -= 48;
			i--;
		}while(i>=0);
		
		i = guarda;
		do
		{
			for(k=0; k<j; k++)
			{
				n*=8;
			}
			soma += resto[i]*n;
			n=1;
			i--;
			j++;
		}while(i>=0);
	printf("\nValor convertido: %d", soma);
	printf("\n\n");
	}
}

int main ()
{
	
	int opcao = 0, hex=16, bin=2, oct=8;
	
	while (opcao != 9){

		printf("MENU");
		printf("\n\n 1- Binario para Decimal");
		printf("\n 2- Binario para Hexadecimal");
		printf("\n 3- Hexadecimal para Decimal");
		printf("\n 4- Hexadecimal para Binario");
		printf("\n 5- Decimal para Hexadecimal");
		printf("\n 6- Decimal para Binario");
		printf("\n 7- Octal para Decimal");
		printf("\n 8- Decimal para Octal");
		printf("\n 9- Sair");
		printf("\n\nDigite a opcao de conversao desejada: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				bin_all(bin);
				return 0;
			case 2:
				bin_all(hex);
				return 0;
			case 3:
				hex_all(hex);
				return 0;
			case 4:
				hex_all(bin);
				return 0;
			case 5:
				dec_all(bin);
				return 0;
			case 6:
				dec_all(hex);
				return 0;
			case 7:
				oct_dec(oct);
				return 0;
			case 8:
				dec_all(oct);
				return 0;
			case 9:
				return 0;		
		}
	}
	
	return 0;
	
}
