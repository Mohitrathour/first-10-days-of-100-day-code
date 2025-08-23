//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    int fahrenhiet,celsius;
    printf("enter the temprature to convert from celsius to fahrenhiet\n");
    scanf("%d",&celsius);
    fahrenhiet=(celsius*9/5)+32;
    printf("fahrenhiet=%d\n",fahrenhiet);
    return 0;
}
