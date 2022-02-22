// CH#5 Ex2.c 
// Write a function int power(int x, int y) that returns x raised to the power of y.
#include<stdio.h>
#include<conio.h>
int power(int x, int y)
{
    int i,p;
    p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    return p;
}
void main(){
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a power: ");
    scanf("%d",&y);
    printf("%d raised to the power of %d is %d",x,y,power(x,y));
    getch();
}