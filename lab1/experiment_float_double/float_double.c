#include <stdio.h>

int main ()
{
    float x=89.0;
    double y=90.0;
    float ans=(x+y)-y;
    if(ans==x) printf("yes");
    else printf("no");
}