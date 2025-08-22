#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("enter the value of length\n");
    scanf("%d",&length);
    printf("enter the value of breadth\n");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area of the rectangle=%d\n",area);
    printf("perimeter of the rectangle=%d\n",perimeter);
    return 0;
}