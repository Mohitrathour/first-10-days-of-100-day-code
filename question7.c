//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int no1,no2;
    printf("enter number 1\n");
    scanf("%d",&no1);
    printf("enter number 2\n");
    scanf("%d",&no2);
    no1=no1*no2;
    no2=no1/no2;
    no1=no1/no2;
    printf("after swap: %d %d",no1,no2);
    return 0;
}    