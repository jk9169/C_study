#include<stdio.h>
int main(void){
	int x;
	scanf("%d", &x);
	
	double arr[100], result, sum = 0, n = 0;
	double *p = arr;
	
	for(int i = 0; i < x; i++){
		scanf("%lf", &arr[i]);
		sum += arr[i];
		n++;
	} 
	result = sum / n;
	for(int j = 0; j < x; j++){
		printf("%.2f ", p[j]);
		
		
	}
	printf("\nhap : %.2f\navg : %.2f", sum, result);
	return 0;
}
