
#include<stdio.h>
int findcharacter(const char *string, char target)
{
	int index = -1;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == target)
		{
			index = i;
			break;
		}
	}
	return index;
}
int main()
{
	char string[100];
	char target;
	printf("Enter a string: ");
	fgets(string, sizeof(string), stdin);
	printf("Enter a character to find: ");
	scanf("%c", &target);
	int index = findcharacter(string, target);
	if (index == -1)
	{
		printf("character not found.\n");
	}
	else
	{
		printf("character found at index: %d\n", index);
	}
	return 0;
}

