/*  Write a program to print the first N odd natural numbers in reverse order.
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the valu of:\n\n");
    scanf("%d",&n);
    for(i=n*2;i>0;i--)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}