#include<stdio.h>
int main(void){
	
	int x;
	scanf("%d", &x);
	
	if(x >= 20){
		printf("adult");
	}
	else
		printf("%d years later", 20 - x);
	return 0;
} 
