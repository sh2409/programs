#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int n,i,n1=0,n2=1,n3;
	clrscr();
	n=atoi(argv[1]);
	for(i=1;i<=n;i++)
	{
		printf("%d ",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	getch();
	return 0;
}