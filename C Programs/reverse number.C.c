#include<stdio.h>
int main()
{
    int n;
    int res=0;
        scanf("%d",&n);
    while(n>0)
        {
        int rem=n%10;
        res=res*10+rem;
        n/=10;
        }
printf("%d",res);
}
