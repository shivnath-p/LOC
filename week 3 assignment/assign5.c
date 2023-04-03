//find the output of the following snippets:-
a. char****k;
          i)    k is a pointer to a pointer to a pointer to a char.
          ii)   k is a pointer to a pointer to a pointer to a pointer to a char.
          iii)  k is a pointer to a char.
          IV)   k is a pointer to a pointer to a char.
ANS:- ii)   k is a pointer to a pointer to a pointer to a pointer to a char.





b.void main()
{
    int k=5;
    int *p=&k;
    int **m=&p;
    **m=6;
    printf("%d\n",k);
}


                    i)      7
                    ii)     4
                    iii)    6
                    iv)     error


    ANS:-iii)    6