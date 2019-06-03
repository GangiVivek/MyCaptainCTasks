#include<stdio.h>
struct book{
	char title[15];
	char author[10];
	char genere[10];

};
details();
int main()
{
	details();
}

details()
{
		struct book b1;
	printf("Enter the title of the book: ");
	scanf("%s",&b1.title);
	printf("Enter the author of the book: ");
	scanf("%s",&b1.author);
	printf("Enter the genere of the book: ");
	scanf("%s",&b1.genere);
	printf("\nThe name of the book is: %s\n The author of the book is: %s\n The genere of the book is: %s",b1.title,b1.author,b1.genere);
}
