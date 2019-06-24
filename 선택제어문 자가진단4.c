#include<stdio.h>
int main(void){
	
	double x;
	scanf("%lf", &x);
	
	if(x <= 50.80){
		printf("Flyweight");
	}
	
	else if(50.80 < x && x <= 61.23){
		printf("Lightweight");
	}
	
	else if(61.23 < x && x<= 72.57){
		printf("Middleweight");
	}
	
	else if(72.57 < x && x<= 88.45){
		printf("Cruiserweight");
	}
	
	else if(88.45 < x){
		printf("Heavyweight");
	}
	
	return 0;
} 
