#include<stdio.h>

int get_sum(int array[], int size){
	
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += *(array + i);
	}
	return sum;
}
int main(void){
	
	int arr[3][6] = {{1, 2, 3, 4, 5, 6},
					{1, 2, 3, 4, 5, 6},
					{1, 2, 3, 4, 5, 6}	
					};
	int sum = 0;
	
	for(int i = 0; i < 3; i++){
		printf("%d\n", get_sum(arr[i], 6));
		sum += get_sum(arr[i], 6);
	}
		printf("%d", sum);
					
	return 0;
}
