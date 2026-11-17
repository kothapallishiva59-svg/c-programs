#include <stdio.h>

int main()
{
int a=5;
    int b=3;
    
    printf("And operation is :%d\n",a&b);
    printf("Or operation is :%d\n",a|b);
    printf("Nor operation is :%d\n",a|~b);
    printf("Not operation is :%d\n",~b);
    printf("Nand operation is :%d\n",a&~b);
    printf("Ex-Nor operation is :%d\n",a^~b);
    printf("Ex-Or opeation is :%d\n",a^b);
    return 0;
    }
