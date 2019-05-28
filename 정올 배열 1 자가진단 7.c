#include<stdio.h>
#include<limits.h>

int main(void){
	
	int arr[10], min;
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
		if(i==0)
		min = arr[i]; 
		if(min > arr[i])
		min = arr[i];
	}
	printf("%d", min);	
	return 0;
}
