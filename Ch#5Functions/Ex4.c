// CH#5 Ex4 
// write a fuction which takes values for three angles of a triangle and prints
// wether the givern values make a valid triangle or not . wether the sum of three angle is 180 or not . 
#include<stdio.h>
int triangle(int a,int b,int c)
{
    int s;
    s=a+b+c;
    if(s==180)
    {
        printf("The given values make a valid triangle");
    }
    else
    {
        printf("The given values do not make a valid triangle");
    }
}
void main()
{
    int a,b,c;
    printf("Enter the values of three angles of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    triangle(a,b,c);
}