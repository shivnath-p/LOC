
//to enter a radius of circle and find its diameter, circumference and area
#include<stdio.h>
main()
{
    float r,d,c,a,pi=3.14;
    printf("enter the radius");
    scanf("%f",&r);
    d=r*2;
    c=2*pi*r;
    a=pi*r*r;
    printf("the diameter is %f/n",d);
    printf("the circumference is %f/n",c);
    printf("the area is %f/n",a);
    return 0;
}