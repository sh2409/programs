#include<stdio.h>
#include<conio.h>

int fib(int);
void main(int argc,char *argv[])
{
	int n,i;
	clrscr();
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
	getch();
	return 0;
}
int fib(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
