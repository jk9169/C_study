#include<stdio.h> 
int array_sum(int *arr, int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr[i];
	}
	return sum;
}
int main(void){
	int arr[5] = {100, 200, 300, 400, 500};
	printf("직원들 월급의 총합: %d",array_sum(arr,5));
	return 0;
}
