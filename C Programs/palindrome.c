#include<stdio.h>
int main()
{
    int n=1234321;
    int res=0;
    int original=n;
    while (n>0)
    {
    int rem=n%10;
        res=res*10+rem;
        n=n/10;
        }
if(original==res)
{	
    printf("It is a palindrome");
}
else 
{
    printf("Not a palindrome");
}
}
