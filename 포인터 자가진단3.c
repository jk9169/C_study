#include<stdio.h>
int main(void){
	int x, y;
	int *p = &x, *q = &y;
	scanf("%d %d", &x, &y);
	printf("%d + %d = %d\n", *p, *q, *p + *q);
	printf("%d - %d = %d\n", *p, *q, *p - *q);
	printf("%d * %d = %d\n", *p, *q, *p * *q);
	printf("%d / %d = %d", *p, *q, *p / *q);
	
	return 0;
} 
