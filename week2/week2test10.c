#include<stdio.h>
#include<string.h>
int main()
{
    int alp=0,digit=0,schar=0,i=0;
    char str[50];
    printf("enter the string");
    scanf("%s",str);
    printf("%s",str);
    // gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        alp++;
        else if((str[i]>='0'&&str[i]<='9'))
        digit++;
        else
        schar++;
        i++;
    }

    printf("\n number of alphabet in the string :%d",alp);
    printf("\n number of digits in the string :%d",digit);
    printf("\n the number of special character are in string :%d",schar);
    return 0;
}   



    

