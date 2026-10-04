#include<stdio.h>
int main()
{
	int n;
	printf("Enter your Number \n");
	scanf("%d", &n);
	long long fact1=1, fact2=1, fact3=1;
	int i, j, k;
	for(i=1; i<= 2*n; i++)
	{
		fact1 = fact1 * i;
	}
	for(j=1; j<=n+1; j++)
	{
		fact2 = fact2 * j;
	}
	for(k=1; k<=n; k++)
	{
		fact3 = fact3 * k;
	}
	long long result;
	result = (fact1)/(fact2 * fact3);
	printf("%ld", result);
	}
