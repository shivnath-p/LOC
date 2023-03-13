//enter two numbers and performs all arithmetic operation
#include<stdio.h>
void main()
{
    float x,y;
    printf("enter two numbers");
    scanf("%f%f",&x,&y);
    switch(1)
    {
        case 1:printf("the addition of two numbers are %f\n",x+y);
            break;
        case 2:printf("the subtraction of two numbers are %f\n",x-y);
            break;
        case 3:printf("the multiplication of two numbers are %f\n",x*y);
            break;
        case 4:printf("the division of two numbers are %f\n",x/y);
            break;
        default:printf("error");
    }

}
