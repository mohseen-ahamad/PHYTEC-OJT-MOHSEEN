#include<stdio.h>
void swap()
{
	int x,y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	printf("before swap x and y are %d %d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("after swap x and y are %d %d\n",x,y);
}
int main()
{
	swap();
}

	
