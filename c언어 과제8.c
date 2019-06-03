#include<stdio.h>

int main(void){
   
   int n, num = 0, count;
   scanf("%d", &n);
   
      for(int i = n; i <= 2*n; i++){
         count=0;
         for(int j = 1; j <= i; j++){
            if(i % j == 0)
            count++;
         }
         if(count == 2)
         num++;
   }
      printf("%d", num);
         
   
   return 0;
}
