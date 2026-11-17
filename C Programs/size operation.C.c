#include <stdio.h>

int main()
{
int a=10;
float b=6.22;
char c='r';
double d=333452;
printf("Size of integer is :%zu\n",sizeof(a));
printf("Size of float is :%zu\n",sizeof(b));
printf("Size of char is :%zu\n",sizeof(c));
printf("Size of double is :%zu\n",sizeof(d));
return 0;
}
