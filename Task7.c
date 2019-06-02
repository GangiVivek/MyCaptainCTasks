#include<stdio.h>
int main()
{
	char word[20];
	int length,i;
	int check=0;
	printf("Enter the word to be checked if it is a palindrome: ");
	scanf("%s",word);
	length=strlen(word);
	for(i=0;i<length;i++)
	{
		if(word[i] != word[length-i-1])
		{
			check=1;
			break;
		}
	}
	
	if(check)
	{
		printf("String is not a palindrome");
	}
	else
	{
		printf("The string is a palindrome");
	}
	
	return 0;
}
