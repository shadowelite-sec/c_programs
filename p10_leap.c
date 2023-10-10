#include <stdio.h>

int main(){
    int year;
    int min,max;
    
    printf("Enter the lowest year: ");
    scanf("%d",&min);

    printf("Enter the heighest year: ");
    scanf("%d",&max);

    printf("Leap years in given range are: ");
    for(year = min;year <= max; year++){
         if(((year%4==0)&&(year%100!=0))||(year%400==0))
             printf("%d ",year);
    }
}

