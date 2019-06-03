#include<stdio.h>
int main()
{
	int num[5];
	int j=0;
	for(j=0;j<5;j++)
	{
	printf("Enter the element %d: ",j);
	scanf("%d",&num[j]);
    }
	int i,max=0,min=0;
	max = num[0];
	min = num[0];
	for(i=0;i<5;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}			

	}
	
	for(i=0;i<5;i++)
	{
		if(min>num[i])
		{
			min=num[i];
		}			

	}
	
	printf("The maximum number is: %d",max);
	printf("\nThe minimum number is: %d",min);
	
}
