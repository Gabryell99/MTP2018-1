//Otávio Zumpano Cunha Rodrigues
//11721EEL016

#include <stdio.h>

unsigned long long int bin_to_dec(char bin[]){
	
	int x = 0;
	unsigned long long int dec = 0;
	
	while(bin[x] != '\0'){
		
		dec = dec * 2 + (bin[x] - '0');
		x++;
	}
	
	return dec;
	
	getch();
	
}

void dec_to_bin(unsigned int bit, int n){
	
	if(n != 0){
		
		dec_to_bin(bit/2, n-1);
		
	}
	
	printf("%d", (bit%2));
	
	getch();
	
}

int main ()
{
	
	int opcao = 0, n, bit;
	char bin[250];
	
	while (opcao != 9){

		printf("MENU");
		printf("\n1- Binario para Decimal");
		printf("\n2- Binario para Hexadecimal");
		printf("\n3- Hexadecimal para Decimal");
		printf("\n4- Hexadecimal para Binario");
		printf("\n5- Decimal para Hexadecimal");
		printf("\n6- Decimal para Binario");
		printf("\n7- Octal para Decimal");
		printf("\n8- Decimal para Octal");
		printf("\n9- Sair");
		printf("\n\nDigite a opcao de conversao desejada: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\nDigite o numero binario: ");
				scanf("%s", &bin); getchar();
				printf("\nConversao para decimal: %d\n\n", bin_to_dec(bin));
				break;
			case 2:
				printf("\nDigite o numero binario: ");
				scanf("%s", &bin); getchar();
				printf("\nConversao para hexadecimal: %x\n\n", bin_to_dec(bin));
				break;
			case 3:
				printf("\nDigite o numero hexadecimal: ");
				scanf("%x", &bit); getchar();
				printf("\nConversao para decimal: %d\n\n", bit);
				break;
			case 4:
				printf("\nDigite o numero hexadecimal: \n\n");
				scanf("%x", &bit); getchar();
				for(n = 0; bit >= (1 << n); n++);
				printf("\nConversao para binario: \n\n");
				dec_to_bin(bit,n);
				break;
			case 5:
				printf("\nDigite o numero decimal: ");
				scanf("%d", &bit); getchar();
				for(n = 0; bit >= (1 << n); n++);
				printf("\nConversao para binario: \n\n");
				dec_to_bin(bit, n);
				break;
			case 6:
				printf("\nDigite o numero decimal: ");
				scanf("%d", &bit); getchar();
				printf("\nConversao para hexadecimal: %x\n\n", bit);
				break;
			case 7:
				printf("\nDigite o numero octal: ");
				scanf("%o", &bit); getchar();
				printf("\nConversao para decimal: %d\n\n", bit);
				break;
			case 8:
				printf("\nDigite o numero decimal: ");
				scanf("%d", &bit); getchar();
				printf("\nConversao para octal: %o\n\n", bit);
				break;			
		}
	}
	
	return 0;
	getch();
	
}
