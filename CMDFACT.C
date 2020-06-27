#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,i,fact=1;
	clrscr();
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %d is: %d",n,fact);
	getch();
}