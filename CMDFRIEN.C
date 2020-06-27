#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n1,n2,i,j,sum1=0,sum2=0;
	clrscr();
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	for(i=1;i<n1;i++)
	{
		if(n1%i==0)
		{
			sum1+=i;
		}
	}
	for(j=1;i<n2;j++)
	{
		if(n2%j==0)
		{
			sum2+=j;
		}
	}
	if(sum1==n1 && sum2==n2)
	{
		printf("\n Friendly Pair");
	}
	else
	{
		printf("\n Not Friendly Pair");
	}
	getch();
}