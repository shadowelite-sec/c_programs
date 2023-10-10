#include  <stdio.h> 
#include  <math.h> 
 
int main() 
{ 
    int  i, n, x[50] ; 
    float  avg, std, sum = 0, s = 0 ; 
    printf("Enter the number of elements: ") ; 
    scanf("%d", &n) ; 
    printf("Enter the elements:\n") ; 
    for(i=0 ; i<n ; i++) 
        { 
            scanf("%d", &x[i]) ; 
            sum=sum+x[i] ; 
        } 
    avg=sum/n ; 
    for(i=0 ; i<n ; i++) 
        s = s + pow(x[i]-avg, 2) ; 
    std = sqrt(s/n) ; 
    printf("The standard deviation of given numbers is %f",std); 
    return 0; 
}
