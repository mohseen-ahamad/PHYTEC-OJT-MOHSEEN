#include<stdio.h>
 int main()
{
	FILE *demo;

	demo = fopen("text2" , "r");

	if(demo == NULL)
		printf("open succesfully");
	else
		printf("open unsuccessfully");

	return 0;

}
