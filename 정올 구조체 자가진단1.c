#include<stdio.h>
int main(void){
	
	struct pdf{
	
		char Name[20];
		char School[20];
		int Grade;
	};
	
	struct pdf s1;
	scanf("%s %s %d", s1.Name, s1.School, &s1.Grade);
	printf("Name : %s\nSchool : %s\nGrade : %d", s1.Name, s1.School, s1.Grade);
	return 0;
}
