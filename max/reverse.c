
#include<stdio.h>
void reverseString(char *str)
{
	char *end = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (str < end)
	{
		char temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--;
	}
}
int main()
{
	char line[1000];
	printf("Enter a line of text: ");
	fgets(line, sizeof(line),stdin);
	if (line[strlen(line) - 1] == '\n')
	{
		line[strlen(line) - 1] = '\0';
	}
	reverseString(line);
	printf("Reversed string: %s\n", line);
	return 0;
}


