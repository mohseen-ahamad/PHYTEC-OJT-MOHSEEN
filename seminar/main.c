#include<stdio.h>
int main()
{
	FILE *demo;

	demo = fopen("text.txt", "w" );
	
	fputs("my name is bannu \n" , demo);
	fputs("my age is 5", demo);

	fclose(demo);
	return 0;
}
