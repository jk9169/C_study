#include<stdio.h>
int main(void){
	int arr[10];
	int k = 1;
	for(int i = 0; i < 10; i++){
		arr[i] = k;
		k++;
	} 
	for(int j = 0; j < 10; j++){
		printf("%d ", arr[j]);
	}
	return 0;
} 
