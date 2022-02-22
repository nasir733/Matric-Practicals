// Ch#5 Ex#7 
// write a function to print the table of a given number.
#include<stdio.h>
void table(int a)
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        j=a*i;
        printf("%d*%d=%d\n",a,i,j);
    }
}
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    table(a);
}