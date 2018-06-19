//Otávio Zumpano Cunha Rodrigues
//11721EEL016


#include <stdio.h>

int main ()
{
	int estado=0, i=0; 
	char bits[256];
	
	printf ("Digite qualquer numero binario para a analise: ");
	scanf ("%s", bits);
	
	while(bits[i] != '\0') 
	{
		if (estado == 0 && bits[i] == '0')
		{
			estado = 0; 
			i++;
		}
		
		if (estado == 0 && bits[i] != '0') 
		{
			estado = 1;
			i++;
		}
		
		if (estado == 1 && bits[i] == '0')
		{
			estado = 2; 
			i++;
		}
		
		if (estado == 1 && bits[i] != '0')
		{
			estado = 0;
			i++;
		}
		
		if (estado == 2 && bits[i] == '0')
		{
			estado = 1; 
			i++;
		}
		if (estado == 2 && bits[i] != '0')
		{
			estado = 2;
			i++;
		}
		
	}
	
	if (estado == 0)
	{
		printf ("O numero digitado eh multiplo de 3.");
	}
	else 
	{
		printf ("O numero digitado nao eh multiplo de 3.");
	}
	return 0;
}
