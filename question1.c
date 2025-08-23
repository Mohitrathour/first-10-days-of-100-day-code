//Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main()
{
    int no1,no2,sum;
    printf("enter number 1\n");
    scanf("%d",&no1);
    printf("enter number 2\n");
    scanf("%d",&no2);
    sum=no1+no2;
    printf("the sum of two numbers are:%d\n",sum);
    return 0;
}    