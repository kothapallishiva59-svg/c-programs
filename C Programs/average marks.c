#include<stdio.h>
int main()
{
    float (avgmarks);
    printf("enter avgmarks:\n");
    scanf("%f",&avgmarks);
    if((avgmarks>=80)&&(avgmarks<100))
    {
        printf("Grade=A\n");
    }
    else if((avgmarks>=70)&&(avgmarks<=79))
    {
        printf("Grade=B\n");
    }
    else if((avgmarks>=50)&&(avgmarks<=69))
    {
        printf("Grade=c\n");
    }
    else if((avgmarks>=35)&&(avgmarks<=49))
    {
        printf("Grade=D\n");
    }
    else
    {
        printf("you are failed");
    }
    }
