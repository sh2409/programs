#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n1,n2,i,gcd;
	clrscr();
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
	}
	printf("\n GCD of %d & %d is %d",n1,n2,gcd);
	getch();
}