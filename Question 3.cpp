#include<stdio.h>
int main()
{
	int present = 0;
	int absent;
	int total = 30;
	int status;
	int i;
	for(i=1; i<=total; i++)
	{
		printf("Press 1 If Present \n");
		scanf("%d", &status);
		if(status == 1)
		{
			present++;
		}
	}
	absent = total - present; 
	printf("%d students are PRESENT\n", present);
	printf("%d students are ABSENT\n",absent );
	
}
