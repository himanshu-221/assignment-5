/*  Write a program to print cubes of the first N natural numbers
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}