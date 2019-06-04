#include<stdio.h>
int search(int *arr, int size, int search_value){
	int result; 
	for(int i = 0; i < size; i++){
		if(arr[i] ==search_value){
		result = i;
		break;
	}
	}
	return result;
}
int main(void){
	int arr[5] = {500, 400, 300, 200, 100};
	printf("%d", search(arr, 5, 200));
	return 0;
}
