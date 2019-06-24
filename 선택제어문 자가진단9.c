#include<stdio.h>
int main(void){
	
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	if(x < y && x < z){
		printf("%d", x);
	}
	
	else if(y < x && y < z){
		printf("%d", y);
	}
	
	else if(z < x && z < y){
		printf("%d", z);
	}
	return 0;
} 
