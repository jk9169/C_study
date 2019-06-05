#include<stdio.h>
int main(void){
	int x;
	int *p = &x;
	scanf("%d", &x);
	
	printf("%d...%d", *p/10, *p%10);
	
	return 0;
} 
