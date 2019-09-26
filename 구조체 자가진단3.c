#include<stdio.h>
int main(void){
	
	struct pdf{
		char name[20];
		int kor;
		int eng;
	};
	
	struct pdf s[1];
	
	scanf("%s %d %d", s[0].name, &s[0].kor, &s[0].eng);
	scanf("%s %d %d", s[1].name, &s[1].kor, &s[1].eng);
	
	int sum1 = s[0].kor + s[1].kor;
	int sum2 = s[0].eng + s[1].eng;
	
	printf("%s %d %d\n", s[0].name, s[0].kor, s[0].eng);
	printf("%s %d %d\n", s[1].name, s[1].kor, s[1].eng);
	printf("avg %d %d", sum1 / 2, sum2 / 2);
	
	return 0;
}
