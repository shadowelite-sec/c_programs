#include<stdio.h>
int main()
{
	char str[30];
	int i,n;
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	for(n=0,i=0;str[i]!='\0';i++)
	{
		switch(str[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':n++;
		}
	}
	printf("\nNumber of vowels in the given string is %d",n);
}
