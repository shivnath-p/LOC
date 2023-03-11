#include<stdio.h>
 int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a>0)
{
    printf("positivenumber");
}
else if(a<0)
{
    printf("nefative number");
}
else if(a==0)
{
    printf("zero");
}
else
{
    printf("not a number");
}
return 0;
}