#include<stdio.h>
int main()
{
	//celsius to fahrenheit convertion
	float celsius,fahrenheit;
	printf("Enter the temperature in Celsius to convert it to fahrenheit: ");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 1.8 ) + 32;
	printf("The temperature in Fahrenheit is %f: ",fahrenheit);
	
}
