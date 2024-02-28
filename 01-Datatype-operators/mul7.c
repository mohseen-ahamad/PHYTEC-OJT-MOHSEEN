
#include<stdio.h>
void mul()
{
	int num;
	printf("Enter the number to multiply: ");
	scanf("%d",&num);
	printf("% is multiplied by 7=%d",num,((num<<3)-num));
}
int main()
{
	mul();
}

