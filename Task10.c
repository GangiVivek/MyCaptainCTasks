#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number to form a pyramid: ");
	scanf("%d",&number);
	printf("%d\n",number);
	while(number>=10)
	{
		number = number / 10;
		printf("%d\n",number);
	}
}
