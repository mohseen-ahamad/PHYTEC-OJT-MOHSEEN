
#include<stdio.h>
#include<string.h>
void string_demo()
{
	char data[100];
	printf("Enter a string :: ");
	gets(data);
	int v_count=0,c_count=0;
	for(int i=0;data[i]!='\0';i++)
	{
		if(data[i] == 'a' ||data[i] == 'e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
	}
	printf("Number of vowels = %d\n",v_count);
	printf("Number of consonants = %d\n",c_count);
}
int main()
{
	string_demo();
}
