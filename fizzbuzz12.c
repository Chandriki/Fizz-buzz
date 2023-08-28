#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%5==0 && i%3==0)
        {
            printf("fizz-buzz\n");

        }
        else if(i%5==0)
        {
            printf("buzz\n");
        }
        else if(i%3==0)
        {
            printf("fizz\n");
        }
        else
        {
           printf("%d\n",i);
        }

    }
    getch();
}

