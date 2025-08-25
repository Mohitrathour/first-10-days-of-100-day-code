#include<stdio.h>
#include<math.h>
float main()
{
    float principal,rate,time;
    float simpleinterest,compoundinterest,amount; 
    printf("enter the value of principal\n");
    scanf("%f",&principal);
    printf("enter the value of rate\n");
    scanf("%f",&rate);
    printf("enter the value of time\n");
    scanf("%f",&time);
    simpleinterest=(principal*rate*time)/100;
    amount=principal*pow(1+rate/100,time);
    compoundinterest=amount-principal;
    printf("simple interest is=%f\n",simpleinterest);
    printf("compound interest is=%f\n",compoundinterest);
    return 0;
}