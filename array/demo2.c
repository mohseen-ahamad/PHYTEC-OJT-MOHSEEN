#include<stdio.h>
void displaynumbers(int num[3][3]);
int main ()
{
	 int num[3][3];
	printf("enter the numbers: \n");
	 for (int i=0; i<3; i++)
	 {
		 for (int j=0; j<3; j++)
		 { 
			 scanf("%d",&num[i][j]);
		 }
	 }
	displaynumbers(num);
	return 0;
		
}
void displaynumbers(int num[3][3])
{		
 printf("displaying numbers: \n");
		for (int i=0; i<3; i++)
		{
			for (int j=0; j<3; j++)
			{ 
				printf("%d\n",num[i][j]);
			}
		}	
}
