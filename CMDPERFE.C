
#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,sum=0,i;
	clrscr();
	n=atoi(argv[1]);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("\n Perfect no");
	}
	else
	{
		printf("\n Not Perfect no");
	}
	getch();
}