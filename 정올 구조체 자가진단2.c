#include<stdio.h>
int main(void){
	
	struct school{
		char name[20];
		int grade;
	};
	
	struct school s1 = {"Jejuelementary", 6};
	
	struct school s2;
	scanf("%s %d", s2.name, &s2.grade);
	
	printf("%d grade in %s School\n", s1.grade, s1.name);
	printf("%d grade in %s School", s2.grade, s2.name);
	
	return 0;
}
