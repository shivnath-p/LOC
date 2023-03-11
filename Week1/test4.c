//enter two numbers and performs all arithmetic operation
#include<stdio.h>
void main()
{
    float x,y,a,s,m,d;
    printf("1 addition\n");
    printf("2 subtraction\n");
    printf("3 multiplication\n");
    printf("4 division\n");
    printf("enter two numbers");
    scanf("%f%f",&x,&y);
    a=x+y;
    s=x-y;
    m=x*y;
    d=x/y;
    switch(1)
    {
        case 1:printf("the addition of two numbers are %f\n",a);
        case 2:printf("the subtraction of two numbers are %f\n",s);
        case 3:printf("the multiplication of two numbers are %f\n",s);
        case 4:printf("the division of two numbers are %f\n",s);
    }

}