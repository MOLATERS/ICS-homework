#include <stdio.h>

int main ()
{
    float f;
    for(;;)
    {
        printf("������һ��������\n");
        scanf("%f",&f);
        printf("�����������%f\n",f);
        if(f==0)break;
    }
}