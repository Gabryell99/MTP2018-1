//Otávio Zumpano Cunha Rodrigues
//11721EEL016

#include<stdio.h>

int main ()
{
	
int op;
int t;
int num=0; 
int numbi;
char bits[256];

       printf("Conversor de numeros :\n\n");
       printf("1) Binario converte para Decimal;\n");
       printf("2) Decimal converte para Octal.\n");
       printf("3) Binario converte para Hexadecimal;\n");
       printf("4) Hexadecimal converte para Decimal;\n");
       printf("5) Hexadecimal converte para Binario;\n");
       printf("6) Decimal converte para Binario;\n");
       printf("7) Decimal converte para Hexadecimal;\n");
       printf("8) Octal converte para Decimal;\n");
       printf("9) Decimal converte para Octal.\n");
       printf("\nSua escolha foi a: ");
       scanf("%d", &op);	getchar();
if(op==1){
	   scanf("%s", bits); getchar();
	for(t=0; bits[t] != '\0'; t++)
	   num = num*2 + (bits[t] - '0');	
	   printf("%d", num);
}else if(op==2){
	   scanf("%s", bits); getchar();
	for(t=0; bits[t] != '\0'; t++)
	   num = num*2 + (bits[t] - '0');	
	   printf("%x", num);
}else if(op==3){
       scanf("%x", &num); getchar();
	   printf("%d", num);
}else if(op==4){
	   scanf("%x", &num); getchar();
	for(numbi = 0; num >= (1 << numbi); numbi++){
	}	
	char binario[numbi];
	for(t=0; t<numbi; t++){
		if(num%2==0){
			binario[t]=0;
		}else{
			binario[t]=1;
		}
		num=num/2;
	}
	for(t=numbi-1; t>=0; t--){
		printf("%i", binario[t]);
	}
}else if(op==5){
	   scanf("%d", &num); getchar();
	for(numbi = 0; num >= (1 << numbi); numbi++){
	}	
	char binario[numbi];
	for(t=0; t<numbi; t++){
		if(num%2==0){
			binario[t]=0;
		}else{
			binario[t]=1;
		}
		num=num/2;
	}
	for(t=numbi-1; t>=0; t--){
		printf("%i", binario[t]);
	}
}else if(op==6){
    	scanf("%d", &num); getchar();
    	printf("%x", num);
}else if(op==7){
	    scanf("%o", &num); getchar();
	    printf("%d", num);
}else if(op==8){
	    scanf("%d", &num); getchar();
	    printf("%o", num);
}

	return 0;
}
