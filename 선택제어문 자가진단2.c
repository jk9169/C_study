#include<stdio.h>
int main(void){
	
	int x, y; //x�� Ű, y�� ������, ������ + 100 - Ű =�񸸰��� 
	scanf("%d %d", &x, &y);
	printf("%d\n", y + 100 - x);
	
	if(y + 100 - x > 0){
		printf("Obesity");
	}
	 
	return 0;
}
