#include<stdio.h>
int main(void){
	int arr[10];
	int a = 100, b = 1, c = 100, d = 10000;
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
		if(arr[i] < 100){
			if(arr[i] > b){
				b = arr[i];
			}
			a = b;
			}
			if(arr[i] > 100){
			if(arr[i] < d){
				d = arr[i];
			}
			c = d;
			}
			
	}
	 printf("%d %d",a, c);
	return 0; 
}
