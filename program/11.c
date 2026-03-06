#include<stdio.h>
int main()
{
    int a=10,*p;
    p=&a;
    printf("%d %d",++a,*p);
    return 0;
}