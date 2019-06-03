#include<stdio.h>
int main(void){
	int arr[100], count = 0;
	for(int i = 0; i < 100; i++){
		scanf("%d ", &arr[i]);
		if(arr[i] == -1){
			break;
		}
		count++;
	}
	if(count < 4){
		for(int i =0; i < count; i++)
		printf("%d ", arr[i]);
	}
	else{
		for(int i = count - 3; i < count; i++)
		printf("%d ", arr[i]);
	}
	return 0;
}
