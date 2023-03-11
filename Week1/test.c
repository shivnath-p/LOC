// -to print the numbers from 1 to 100 but replace multiple of 3 with "fizz" and multiples of 5 with "buzz"
#include<stdio.h>
 int main()
{
        int i;

        for(i=1;i<=100;i++)
        {
                if(i%3==0)
                {
                        printf("fizz\n");
                }
                else if(i%5==0)
                {
                        printf("buzz\n");
                }
                else
                {
                printf("%d\n",i);
                
                }
        
        }
        return 0;
}
        