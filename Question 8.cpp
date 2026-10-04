#include<stdio.h>
int main()
{
	int arr[9];
	for(int i=0; i < 8; i++)
	{
		printf("Enter Your Number \n");
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<8; i++)
	{
		printf("%d | \t", arr[i]);
	}
	int largest = arr[0];
	int smallest = arr[0];
	for(int i = 0; i<8; i++)
	{
		if(arr[i] > largest)
		{
			largest = arr[i];
		}
		if(arr[i] < smallest)
		{
			smallest = arr[i];
		}
		
	}
	printf("\n%d is the SMALLEST NUMBER \n", smallest);
	printf("%d is the LARGEST NUMBER \n", largest);
	int search;
	printf("Enter a Number to search");
	scanf("%d", &search);
	for(int i = 0; i < 8; i++)
	{
		if(search == arr[i])
		{
			printf("Your Number is in index %d \n", i);
			break;
		}
		
	}
	int insert;
	printf("Enter the index you want to insert at \n");
	scanf("%d", &insert);
	for( int i = 8; i > insert; i--)
	{
		arr[i] = arr[i-1];
	}
	printf("Enter the new number you want to insert \n");
	int newnumber;
	scanf("%d", &newnumber);
	arr[insert] = newnumber;
	for(int i=0; i < 9; i++)
	{
		printf("%d \t", arr[i]);
	}
}
