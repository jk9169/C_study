#include<stdio.h>
int main(void){
	
	int x, y; //x는 키, y는 몸무게, 몸무게 + 100 - 키 =비만공식 
	scanf("%d %d", &x, &y);
	printf("%d\n", y + 100 - x);
	
	if(y + 100 - x > 0){
		printf("Obesity");
	}
	 
	return 0;
}
