
#include<stdio.h>
int stringLength(char *str)
{
	int length = 0;
	while(*str!= '\0'){
		length++;
		str++;
	}
	return length;
}
int main()
{
	char line[1000];
	printf("Enter a line of text: ");
	fgets(line,sizeof(line),stdin);
	if(line[stringLength(line)-1] == '\n')
	{
		line[stringLength(line)-1]='\0';
	}
	int length = stringLength(line);
	printf("Length of the string: %d\n",length);
	return 0;
}
