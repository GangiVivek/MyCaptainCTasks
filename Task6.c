#include<stdio.h>
int main()
{
	int num,length,nn;
	char n[10]; 
	printf("Enter the number to check if it is a armstrong number: ");
	gets(n);
	num = atoi(n);
	nn=num;
	length=strlen(n);
	int i,sum,s,p;
	sum =0;
	p  = 0;
	for(i=0;i<=length;i++)
	{
		s=num%10;
		num=num/10;
		sum=sum+s;
		p = p + pow(s,length);
	}
	//printf("%d\n",sum);
	//printf("%d\n",p);
	if(p == nn)
	{
		printf("It is an armstrong number\n");
	}	
	else
	{
		printf("It is not an armstrong number\n");
	}
}
