#include<stdio.h>
int main()
{
	FILE *new;
	
	new = fopen("info.txtt" ,"r");
	if (new == NULL )
		printf("open succesfully");
	else
		printf("opens unsuccessfully");

	return 0;
}
