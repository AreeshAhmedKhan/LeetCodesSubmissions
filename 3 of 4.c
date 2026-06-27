#include <stdio.h>

struct student{
	int age;
	char first_name[50];
	char last_name[50];
	int standard;
};

int main(){
	struct student s1;
	printf("Enter age");
	scanf("%d", &s1.age);
	printf("Enter first name");
	scanf("%s", &s1.first_name);
	printf("Enter last name");
	scanf("%s", &s1.last_name);
	printf("Enter standard");
	scanf("%d", &s1.standard);
	
	printf("%d\t", s1.age);
	printf("%s\t", s1.first_name);
	printf("%s\t", s1.last_name);
	printf("%d\t", s1.standard);
}
