#include<stdio.h>

int main()
{
	char str[80],ss[10],c;
	int i,j,in;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	for(in=0,i=0,j=0;(c=str[i])!='\0';i++)
	{
		if(c<'A' || c>'Z'&&c<'a' || c>'z') in=0;
		else if(!in)
		{
			in=1;
			ss[j++]=c;
		}
	}
	ss[j]='\0';
	printf("\nShort form is %s",ss);
}
