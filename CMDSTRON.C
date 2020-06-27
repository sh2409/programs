#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,r,sum=0,i,fact,num;
	clrscr();
	n=atoi(argv[1]);
	num=n;
	while(n)
	{
		i=1,fact=1;
		r=n%10;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;

	}
	if(sum==num)
	{
		printf("\n STRONG no");
	}
	else
	{
		printf("\n Not STERONG no");
	}

	getch();
}