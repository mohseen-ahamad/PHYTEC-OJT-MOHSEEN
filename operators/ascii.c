#include<stdio.h>
void ascii(void);
void ascii()
{
	char data;
	printf("Enter any character: \n");
	scanf("%c",&data);
	printf("ASCII value of entered character is %d",data);
}
int main()
{
	ascii();
}
