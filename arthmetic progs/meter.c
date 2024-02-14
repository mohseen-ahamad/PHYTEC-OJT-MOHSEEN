#include<stdio.h>
int main()
{
	float a,b,c,r;
	printf("Enter the kilomaters before ride\n");
	scanf("%f",&a);
	printf("enter the kilometers after ride\n");
	scanf("%f",&b);
	c=b-a;
	printf("total kilometers travel is %f\n",c);
	r=c*20;
	printf("total fare for your ride is %f\n",r);
	return 0;
}
