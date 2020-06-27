
#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int year;
	clrscr();
	year=atoi(argv[1]);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("\n Leap year");
			}
			else
			{
				printf("\n Not Leap Year");
			}
		}
		else
		{
			printf("\n Leap Year");
		}

	}
	else
	{
		printf("\n Not Leap Year");
	}
	getch();
}