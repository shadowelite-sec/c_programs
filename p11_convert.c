#include<stdio.h>
#include<string.h>

int main()
{
    unsigned dec,t,d,i;
    int choice;
    char bin[20],oct[15],hex[5];
    do {
    printf("\nEnter a decimal number : ");
    scanf("%u",&dec);
    printf("\n1.Binary\n2.Octal\n3.Hexadecimal\n");
    t=dec;
    i=0;
    do
    {
        d=t%2;
        t=t/2;
        bin[i++]=d+48;
    }while(t!=0);
    bin[i]='\0';
    strrev(bin);
    t=dec;
    i=0;
    do
    {
        d=t%8;
        t=t/8;
        oct[i++]=d+48;
    }while(t!=0);
    oct[i]='\0';
    strrev(oct);
    t=dec;
    i=0;
    do
    {
        d=t%16;
        t=t/16;
        if(d>9) hex[i++]=d+55;
        else hex[i++]=d+48;
    }while(t!=0);
    hex[i]='\0';
    strrev(hex);

    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice == 0)
    break;
    switch(choice) {
    	case 1:
    	printf("\nBinary : %s",bin);
    	break;

    	case 2:
    	printf("\nOctal : %s",oct);
    	break;

    	case 3:
    	printf("\nHexadecimal : %s ",hex);
		break;

		default:
		printf("\nInvalid choice!");
	}

	} while(choice);
}
