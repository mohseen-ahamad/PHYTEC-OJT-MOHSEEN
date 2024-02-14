#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[50];
	int marks, i ,number;

	printf("enter the number of students: ");
	scanf("%d", &number);

	FILE *student;
	student = (fopen("info.txt", "w"));
	
	if(student == NULL)
	{
		printf("ERROR !");
		exit(1);
	}
	 for(i = 0; i < number; ++i)
	 {
		printf("for student : %d \n " , i+1);

		 printf(" Enter the name : ");
		 scanf("%s" , name);

		 printf("enter marks ; ");
		 scanf("%d", &marks);

		 fprintf(student,"\n NAme: %s \nMarks=%d \n", name, marks);
	 }

	fclose(student);
	 return 0 ;
}
