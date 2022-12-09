#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE*f;
	f=fopen("hello.c","r");
	if (f==NULL)
	{
		printf("fail!");
		return 0;
	}
	int count=0;
	while(!feof(f))
	{
		char p[16];
		int count_p=0;
		printf("%2d  ",count);
		while(count_p<15)
		{
			p[count_p] = fgetc(f);
			count_p++;
			if(feof(f))
			  break;
		}
		if(feof(f)) count_p-=2;
		for (int i=0;i<=count_p-1;i++)
		{
			if(p[i]=='\n')
			printf("\\n  ");
			else if(p[i]==' ')
			printf("SP  ");
			else
			printf("%2c  ",p[i]);
		}
		printf("\n");
		printf("     ");
		for(int i=0;i<=count_p-1;i++)
		{
			printf("%2x  ",p[i]);			
		}
		printf("\n");
		count++;
	}
}
