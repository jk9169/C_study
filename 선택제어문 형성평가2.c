#include<stdio.h>
int main(void){
	
	int x;
	scanf("%d", &x);
	
	if(x == 0){
		printf("zero");
	}
	
	else if(x > 0){
		printf("plus");
	}
	
	else if(x < 0){
		printf("minus");
	}
	return 0;
} 
