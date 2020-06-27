#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,num,t,equal,r;
	long int sq;
	clrscr();
	n=atoi(argv[1]);
	num=n;
	sq=n*n;
	t=10;
	while(n>0)
	{
		r=sq%t;
		if(num==r)
		{
			equal=1;
			break;
		}
		n=n/10;
		t=t*10;
	}
	if(equal==1)
	{
		printf("\n Autotrophic no");
	}
	else
	{
		printf("\n Not Autotrophic no");
	}
	getch();
}