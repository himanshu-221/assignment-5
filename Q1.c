/*  Write a program to print iNeuron N times on the screen */

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter how many times you want to print iNeuron:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("iNeuron\n");
    }
    return 0;
}