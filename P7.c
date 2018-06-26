//Otávio Zumpano Cunha Rodrigues
//11721EEL016

#include <stdio.h>

int fun_ack(int m, int n)
{
	if (m == 0)
	{	
		return n+1;	
	}
	else if (m > 0 && n == 0)
	{
		return fun_ack(m-1,1);	
	}
	else if (m > 0 && n > 0)
	{
		return fun_ack(m-1, fun_ack(m,n-1));	
	}
}

int main()
{
	int m, n;
	printf("\nDigite o valor de m: ");
	scanf("%d", &m);
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	printf("\nO resultado da funcao Ackermann eh: %d", fun_ack(m,n));
	return 0;
}

