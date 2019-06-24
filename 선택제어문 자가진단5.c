#include<stdio.h>
int main(void){
	
	float x, y;
	scanf("%f %f", &x, &y);
	
	if(x >= 4.0 && y>= 4.0){
		printf("A");
	}
	
	else if(x >= 3.0 && y>= 3.0){
		printf("B");
	}
	
	else
		printf("C");
	return 0;
}
