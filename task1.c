#include<stdio.h>
int main()
{
	//name age phone number i/p from user and display it back
	char name[10];
	int age;
	char number[10];
	printf("Enter your name: ");
	scanf("%s",&name);
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your number: ");
	scanf("%s",&number);
	printf("-----------------------------------\n");
	printf("Your name is %s.\n",name);
	printf("Your age is %d.\n",age);
	printf("Your name is %s.\n",number);
	printf("-----------------------------------\n");

}
