#include<stdio.h>
int main(void){
	
	int x;
	scanf("%d", &x);
	
	if(x < 0){
		printf("%d\nminus", x);
	}
	else
		printf("%d", x);
	return 0;
}
