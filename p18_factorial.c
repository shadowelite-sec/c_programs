#include<stdio.h>

long factorial(int);

int main()
{
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("\nFactorial of %d is %ld",x,factorial(x));
}

long factorial(int n)
{
	if(n==0) return 1;
	else return n*factorial(n-1);
}
