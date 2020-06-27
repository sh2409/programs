#include<stdio.h>
#include<conio.h>
int main(int argc,char *argv[])
{
	char ch;
	clrscr();
	ch=atoi(argv[1]);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("\n Vowel");
	}
	else
	{
		printf("\n Consonent");
	}
	getch();
	return 0;
}