#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sum;
	float avg;
	printf("Enter the marks of subject 1: ");
	scanf("%d",&sub1);
	printf("Enter the marks of subject 2: ");
	scanf("%d",&sub2);
	printf("Enter the marks of subject 3: ");
	scanf("%d",&sub3);
	sum=sub1+sub2+sub3;
	avg=sum/3;
	printf("The sum of the three subjects marks: %d\n",sum);
	printf("The average of the marks is: %f\n",avg);
	
}
