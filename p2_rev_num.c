#include <stdio.h>

int main(){

	int num,sum=0, rev=0,d;
	printf("Enter The Number: ");
	scanf("%d",&num);
	

	while(num){

		d=num%10;
		num=num/10;
		sum=sum+d;
		rev=rev*10+d;
	}

	printf("\nReverse of The Number : %d",rev);
	printf("\nSum of The Number : %d\n",sum);
}
