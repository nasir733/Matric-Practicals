// Ch#5 Ex1
// write a function int square (int x) that returns the square of x.
#include<stdio.h>
int square(int x)
{
    return x*x;
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("The square of %d is %d",x,square(x));
}