#include<stdio.h>
struct student{
	int id;
	char name[20];
	float per; 
};

int main(){
	struct student s1 = { 101, "SALMAN", 92.5};
	printf("id of student1 : %d\n", s1.id);
	printf("Name of student1 : %s\n", s1.name);
	printf("Percentage of student1 : %.2f%%\n", s1.per);
	
	struct student s2 = s1;
	
	struct student s3;
	
	printf("Enter id of student3 : ");
	scanf("%d", &s3.id);
	printf("Enter Name of student3 : ");
	scanf("%s", s3.name);
	printf("Percentage of student3 : ");
	scanf("%f", &s3.per);
	
	printf("id of student3 : %d\n", s3.id);
	printf("Name of student3 : %s\n", s3.name);
	printf("Percentage of student3 : %f%%\n", s3.per);
	

	return 0;
}

