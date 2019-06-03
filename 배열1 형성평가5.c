#include<stdio.h>
int main(void){
	double arr[6], sum = 0;
	 
	for(int i = 0; i < 6; i++){
		scanf("%lf", &arr[i]);
		sum += arr[i];
		
	}
	printf("%.1f", sum/6);
	return 0;
} 
