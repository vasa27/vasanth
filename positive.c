#include<stdio.h>
void main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%dgiven number is positive\n",num);
    }
    else if(num<0)
    {
        printf("%dgiven number is negative\n",num);
    }
    else
      printf("given number is zero");
}
