#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n1,n2,lcm;
	clrscr();
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	if(n1>n2)
	{
		lcm=n1;
	}
	else
	{
		lcm=n2;
	}
	while(1)
	{
		if(lcm%n1==0 && lcm%n2==0)
		{
			printf("LCM of %d & %d is %d",n1,n2,lcm);
			break;
		}
		lcm++;
	}
	getch();
}
