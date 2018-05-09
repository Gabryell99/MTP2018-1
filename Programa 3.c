#include <stdio.h>

int decall(int num, int vet[256])
{	
    int rest[100], armazena, i=0, j=0, base=2, num1=0;
	if(num < 0)
	{ 
	  num1 = num;
	  num = (-num) - 1;
	  armazena = num;	
	}
	else if(num >= 0)
	{	
	   num1 = num;
	   armazena = num;
	}
	rest[0] = 1;
	for(i=0; num >= base; i++)
	{	
	    rest[i] = num%base;	
		num = num/base;
		if(num < base)
		{	
		    i++;
			rest[i] = num;		
		} 
	}	
	if(armazena>base)
	{ 
	    i--;	
	}
	num = armazena;	
	armazena = 32;
	for(j=0; j<armazena; j++)
	{	
	    if(j < (armazena-(i+1)))
		{	
		    vet[j] = 0;	
		}
		else
		{	
		    vet[j] = rest[i];
			i--;
		}
		if(num1 < 0)
		{	
		    if(vet[j] == 0)
			{	
			    vet[j] = 1;		
			}
			else if(vet[j] == 1)
			{	
			    vet[j] = 0;			
			}
		}
	}
return j; 
}

int main ()
{
	int opcao, i=0, j, k, num1, num2, num3, vet_n[256], vet_n1[256], vet_c[256];

	do
	{	printf("Calculadora");
		printf("\n 1-not ");
		printf("\n 2-and ");
		printf("\n 3-or  ");
		printf("\n 4-xor ");
		printf("\n 5-Right shift ");
		printf("\n 6-Left shift");
		printf("\n 7-Sair ");
		printf("\nSua opcao eh: ");
		scanf("%d", &opcao);
		
		if(opcao == 7)
		{
		    return 0;
		}
		else if(opcao != 1 && opcao <= 7)
		{	
		    printf("\nDigite os dois valores para serem operados pela calculadora: ");
			scanf("%d %d", &num1, &num2);
			getchar();	
		}
		else if(opcao == 1)
		{
			printf("\nDigite um valor para se operado pela calculadora: ");
			scanf("%d", &num1);
			getchar();
		}
			
		switch(opcao)
		{	case 1:
				j = decall(num1, vet_n);
				printf("\nNOT %d (", num1);
				for(i=0; i<j; i++)
				{	
				     printf("%d", vet_n[i]);
					 if(i==(j-1))
					 {	
					    printf(") : ");	
					 }	
				}
				num1 = ~num1;
				j = decall(num1, vet_n1);
				printf(" %d (", num1);
				for(i=0; i<j; i++)
				{
					printf("%d", vet_n1[i]);
				    if(i==(j-1))
					{	
					      printf(") ");	
					}	
				}
				printf("\n\n");
				break;
			case 2:
	 			j = decall(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++)
				{	
				     printf("%d", vet_n[i]);
					 if(i==(j-1))
					 {	
					    printf(") AND");
					 }	
				}
				j = decall(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_n1[i]);
			        if(i==(j-1))
				    {	
				       printf(") :");
				    }	
				}
				num3 = num1 & num2;
				j= decall(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++)
				{	
				   printf("%d", vet_c[i]);
				   if(i==(j-1))
				   {	
				       printf(") ");
					}	
				}
				printf("\n\n");
				break;
			case 3:
				j = decall(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++)
				{
					printf("%d", vet_n[i]);
				    if(i==(j-1))
					{	
					    printf(") OR");
					}	
				}
				j = decall(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++)
				{
					printf("%d", vet_n1[i]);
					if(i==(j-1))
					{	
					    printf(") :");
					}	
				}
				num3 = num1 | num2;
				j= decall(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_c[i]);  
					if(i==(j-1))
					{	
					    printf(") ");
					}	
				}
				printf("\n\n");
				break;
			case 4:
				j = decall(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++)
				{
				   printf("%d", vet_n[i]);
				   if(i==(j-1))
				   {
				      	printf(") XOR");
				   }
		    	}
			    j = decall(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_n1[i]); 
					if(i==(j-1))
					{	
					    printf(") :");
					}
				}
				num3 = num1 ^ num2;
				j= decall(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_c[i]); 
					if(i==(j-1))
					{	
					    printf(") ");
					}
				}
				printf("\n\n");
				break;
			case 5:
				j = decall(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_n[i]);
					if(i==(j-1))
					{	
					    printf(") >>");
					}
				}
				j = decall(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_n1[i]);
					if(i==(j-1))
					{	
					    printf(") :");
					}
				}
				num3 = num1 >> num2;
				j= decall(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_c[i]); 
					if(i==(j-1))
					{	
					    printf(") ");
					}
				}
				printf("\n");
				break;
			case 6:
				j = decall(num1, vet_n);
				printf("\n%d (", num1);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_n[i]);
					if(i==(j-1))
					{
						printf(") >>");
					}
				}
				j = decall(num2, vet_n1);
				printf(" %d (", num2);
				for(i=0; i<j; i++)
				{	
				    printf("%d", vet_n1[i]); 
					if(i==(j-1))
					{	
					    printf(") :");
					}
				}
				num3 = num1 << num2;
				j= decall(num3, vet_c);
				printf(" %d (" ,num3);
				for(i=0; i<j; i++)
				{
					printf("%d", vet_c[i]);  
					if(i==(j-1))
					{	
					    printf(") ");
					}	
				}
				printf("\n");
				break;
			    default:
				break;
		}
	}
	while(1);
} 
