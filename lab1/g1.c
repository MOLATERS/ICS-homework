#include <stdio.h>

long double f(long double f1, long double f2, int n)
{
    if (n >= 2)
    {
        return f(f1 + f2, f1, n - 1);
    }
    return f2;
}

double A(int n)
{
    long double a = f(1,1,n);
    long double b = f(1,1,n + 1);
    return (double)(a) / b;
}

int main()
{
    printf("%.8f\n", A(100));
    return 0;
}