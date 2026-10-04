#include <stdio.h>
int main()
{
	int pin;
	printf("Enter YOUR PIN \n");
	scanf("%d", &pin);
	int n = pin;
	int N = pin;
	int sum = 0;
	while(n > 0)
	{
		N = n % 10;
		n = n / 10;
		sum = sum + N;
	}
	if (sum > 10)
	{
		printf("Strong Pin");
		
	}
	else 
	{
		printf("Weak Pin");
	}
}
