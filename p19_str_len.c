#include<stdio.h>

int main()
{
	char str[20],*p;
	int n;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	for(n=0,p=str;*p!='\0';p++,n++);
	printf("\nLength of the given string is %d",n-1);
}
