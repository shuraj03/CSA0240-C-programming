#include<stdio.h>
struct student{
	char name[500];
	int roll;
	float marks;
}s;
int main(){
	printf("enter the neceassary informations-:\n");
	printf("enter name:\n");
	fgets(s.name,sizeof(s.name),stdin);
	printf("enter the roll no:");
	scanf("%d",&s.roll);
	printf("enter the marks obtained:");
	scanf("%f",&s.marks);
	printf("displaying information:\n");
	printf("name of student:%s",s.name);
	printf("roll no of student:%d\n",s.roll);
	printf("marks obtained by student:%f\n",s.marks);
}
