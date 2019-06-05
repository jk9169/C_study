#include<stdio.h>
int main(void){
	
	int x;
	int *p = &x;
	scanf("%d", &x);
	printf("%#p %d", *p, *p);
	
	return 0;
}
