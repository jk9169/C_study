#include<stdio.h>
int main(void){
	
	int x;
	scanf("%d", &x);
	
	if(x % 400 == 0 || x % 4 == 0 && x % 100 != 0){
		printf("leap year");
	}
	
	else
		printf("common year");	
	return 0;
}
