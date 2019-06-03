#include<stdio.h>
int main(void){
	int arr[10], odd = 0, even = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < 10; i+=2){
		odd += arr[i];
		even += arr[i+1];
	
	}
	printf("odd : %d\neven : %d", odd, even);
	return 0;
}
