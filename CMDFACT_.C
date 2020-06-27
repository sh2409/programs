#include<stdio.h>
#include<conio.h>
int fact(int);
int main(int argc,char *argv[])
{
	int no;
	clrscr();
	no=atoi(argv[1]);
	printf("\n Factorial of %d is %d",no,fact(no));
	getch();
	return 0;
}
int fact(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}