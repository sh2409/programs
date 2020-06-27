#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,num,r,sum=0;
	clrscr();
	n=atoi(argv[1]);
	num=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==num)
	{
		printf("%d is palindrome no",num);
	}
	else
	{
		printf("%d is not palindrome no",num);
	}
	getch();
}