#include<stdio.h>
int main()
{
	int ticket;
	int n;
	int temp;
	printf("Enter Your Ticket Number : \n");
	scanf("%d", &ticket);
	n = ticket;
	temp = 0;
	int N = 0;
	
	while(n!=0)
	{
		N = n % 10;
		n = n / 10;
		temp = (temp * 10) + N;
		
	}
	printf("%d", temp);
	
}
