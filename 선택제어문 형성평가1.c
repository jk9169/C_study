#include<stdio.h>
int main(void){
	
	int x, y;
	scanf("%d %d", &x, &y);
	
	if(x > y){
		printf("%d", x - y);
	}
	
	else if(y > x)
		printf("%d", y - x);
		
	else if(x == y){
		printf("0");
	}
	return 0;
} 
