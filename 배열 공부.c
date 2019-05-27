#include<stdio.h>
#define ARR_SIZE 5
int add(int a, int b)
{
	return a + b;
}
int main(void){
	int arr[ARR_SIZE] = {0};
	
	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("정수 2개 입력하세요");
	scanf("%d %d", &arr[3], &arr[4]);
	
	for(int i = 0; i < ARR_SIZE; i++){
		printf("%d ", arr[i]);
	} 
	return 0;
}
