//Ch#5 Ex5
// write a function which the amount and interest percentage and return the interest amount . 
#include<stdio.h>
int interest(int a,int b)
{
    int i;
    i=a*b/100;
    return i;
}
void main()
{
    int a,b;
    printf("Enter the amount and interest percentage: ");
    scanf("%d%d",&a,&b);
    printf("The interest amount is: %d",interest(a,b));
}