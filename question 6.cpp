#include<stdio.h>
int main()
{
	int num;
	int digit;
	printf("Enter your Number: \n");
	scanf("%d", &num);
	int even=0, odd=0;
	while(num !=0)
	{
		digit = num % 10;

		if(digit%2 == 0)
		{
			even++;
		}
		else{
			odd ++;
		}
		num = num/10;
	}
	printf("There are %d Even Numbers\n", even);
	printf("There are %d Odd Numbers \n", odd);
}
