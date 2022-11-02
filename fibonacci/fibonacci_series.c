#include<stdio.h>

int fib(int n1)
{
    if(n1<=1)
    {
        return n1;
    }
    return fib(n1-1)+fib(n1-2);
}
int main()
{
    int n, temp;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
