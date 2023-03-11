#include<stdio.h>
void main()
{
    int a,r,s=0;
    printf("enter a number");
    scanf("%d",&a);
    do{
        r=a%10;
        s=s+r;
        a=a/10;
        
    }while(a!=0);
    printf("the sum of digit are %d\n",s);

}
