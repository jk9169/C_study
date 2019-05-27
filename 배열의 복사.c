#include<stdio.h>
int main(void){
	int x[5] = { 10, 20, 30, 40 ,50};
	int y[5] = { 0 };
	for(int i = 0; i < 5; i++){
		y[i] = x[i];
	}
	printf("y = ");
	for(int i = 0; i < 5; i++){
		printf("%d ", y[i]);
		
	}
	return 0;
}
