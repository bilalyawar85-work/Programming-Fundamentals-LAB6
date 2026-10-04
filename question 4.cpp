#include<stdio.h>
int main()
{
	int code;
	printf("Enter your CODE \n");
	scanf("%d", &code);
	int n, reverse;
	int digit = 0;
	n = code;
	reverse = 0;
	while(n!=0)
	{
	    digit = n % 10;
	    n = n / 10;
	    reverse = (reverse * 10)  + digit;
	}
	if(reverse == code)
	{
		printf("Is a Palindrome\n");
	}
	else{
		printf("Not a palindrome\n");
		
	}
	return 0;
}
