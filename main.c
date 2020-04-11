#include<stdio.h>

void test(int *b)
{
    int a;
    a=(int )&b;
    printf("%d\n",a);
}
int main()
{
    int *b;
    int c=1,d=0;
    b=&c;
    test(b);
    d=(int)&b;
    printf("%d\n",d);
    return 0;
}
