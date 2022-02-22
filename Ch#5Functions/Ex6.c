// Ch#5 Ex#6 
// write a function which takes a number as input and displays its digits with spaces in between.
#include<stdio.h>
void display(int a)
{
    int i,j,k;
    i=a;
    while(i>0)
    {
        j=i%10;
        printf("%d",j);
        i=i/10;
    }
}
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    display(a);
}