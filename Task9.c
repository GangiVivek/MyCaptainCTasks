#include<stdio.h>
int main()
{
	int num;
	int fact = 1;
	printf("Enter the number to find the factorial: ");
	scanf("%d",&num);
	int i=1;
	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}
	printf("The factorial of the number is: %d\n",fact);
}
