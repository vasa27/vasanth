#include <stdio.h>
 int main()
{
    int num;
    char choice;
        printf("Enter an integer number :");
        scanf("%d",&num);
        if(num==0)      
            printf("Number is ZERO.");
        else if(num>0)   
            printf("Number is POSITIVE.");
        else          
            printf("Number is NEGATIVE.");
}
