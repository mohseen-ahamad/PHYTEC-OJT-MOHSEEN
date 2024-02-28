#include<stdio.h>
void ternary(void);
void ternary()
{
	int n1,n2,n3,x;
	printf("Enter n1: ");
	scanf("%d",&n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
	printf("Enter n3: ");
	scanf("%d",&n3);
	x=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
	printf("Largest of three number is %d",x);
}
int main()
{
	ternary();
}
