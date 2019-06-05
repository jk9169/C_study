#include<stdio.h>
int main(void){
	double arr[5];
	double *p = &arr[0];
	
	for(int i = 0; i < 5; i++){
		
		scanf("%lf", &arr[i]);
	}
	for(int j = 0; j < 5; j++){
		printf("%.1f ", p[j]);
	}
	return 0;
}
