// CH#5 Ex#3
// write a function to calculate factorial of a number.
#include<stdio.h>
int factorial(int n)
{
    int i,f;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
}
