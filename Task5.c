#include<stdio.h>
int main()
{
	int num;
	int revnum,rem; 
	printf("Enter your number to be inverted: ");
	scanf("%d",&num);
	while(num!= 0)
	{
		rem = num %10;
		revnum = revnum*10 + rem;
		num = num/10;
	}
	
	printf("The reversed number is: %d",revnum);
}
