#include<stdio.h>
int main(void){
	char arr[10];
	for(int i = 0; i < 10; i++){
		scanf(" %c ",&arr[i]);
	}
	for(int j = 9; j >= 0; j--){
		printf("%c ", arr[j]);
	}
	
	return 0;
} 
