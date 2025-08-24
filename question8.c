//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the no till you have to find the sum\n");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("sum of n integers:%d\n",sum);
    return 0;
}    