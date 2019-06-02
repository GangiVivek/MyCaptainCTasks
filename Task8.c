#include<stdio.h>
int main()
{
	int number,num;
	int i=0;
	printf("Enter the number to print its mul. table: ");
	scanf("%d",&number);
	for(i=0;i<=10;i++)
	{
		num = number * i;
		printf("%d\t",number);
		printf("x\t");
		printf("%d\t",i);
		printf("=\t");
		printf("%d\n",num);
	}
	
}
