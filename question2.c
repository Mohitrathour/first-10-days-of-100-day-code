//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int no1,no2,sum,difference,product,quotient;
    printf("enter number 1\n");
    scanf("%d",&no1);
    printf("enter number 2\n");
    scanf("%d",&no2);
    sum=no1+no2;
    printf("sum of two numbers are:%d\n",sum);
    difference=no1-no2;
    printf("difference of two numbers are:%d\n",difference);
    product=no1*no2;
    printf("product of two numbers are:%d\n",product);
    if(no2==0)
    {
        printf("invalid quotient due to zero divisible");
    }
    else 
    {
        quotient=no1/no2;
        printf("the quotient of the two no are:%d\n",quotient);
    }
    return 0;
}    