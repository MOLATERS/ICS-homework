#include <stdio.h>

long double f(int n)
{
     long double f1=1, f2=1;
	for(int i=1;i<=n-1; i++){
		long double t = f1;
		f1=f2;
		f2=t+f2;
    }
    return f1;
}

double A(int n)
{
    long double a=f(n);
    long double b=f(n+1);
    return (double)(a)/b;
}

int main ()
{
    printf("%.8f\n",A(100));
}