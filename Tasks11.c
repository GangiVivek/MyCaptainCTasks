#include<stdlib.h>
#include<stdio.h>
int main()
{
	int choice;
	int c1,f1,c2,f2;
	printf("Choose the required:\n1.Celcius to Fahrenheit convertion.\n2.Fahrenheit to Celcius convertion.\n3.Exit\n : ");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
	{
		printf("Enter the temperature to convert from Celcius to Fahrenheit: ");
		scanf("%d",&c1);
		f1 = (c1*1.8)+32;
		printf("The converted temperature in Fahrenheit is: %d",f1);
		break;
		
	}
	
	case 2:
	{
		printf("Enter the temperature to convert from Fahrenheit to Celcius: ");
		scanf("%d",&f2);
		c2 = (f2-32)/0.5555;
		printf("The converted temperature in Celcius is: %d",c2);
		break;
	}
	
	case 3:
	{
		exit(0);
		break;
	}
   }
}
