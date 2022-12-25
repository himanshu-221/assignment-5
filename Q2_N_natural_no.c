/*  Write a program to print the first N natural numbers    */
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value of N:-\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {       // All the positive integers are natural number from 1 to infinite
        printf("%d\n",i);
    }
    return 0;
}