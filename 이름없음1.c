int main(void){
   int money, count6=0, count5=0, count4=0, count1=0;
   
   scanf("%d", &money);
   
   if(money>=6){
      for(int i=1; ; i++){
         money -= 6;
         count6++;
         if(money<6){
            break;
         }
      }
      if(money>=5){
         for(int i=1; ; i++){
            money -= 5;
            count5++;
            if(money<5){
               break;
            }
         }
      }
      if(money>=4){
         for(int i=1; ; i++){
            money -= 4;
            count4++;
            if(money<4){
               break;
            }
         }
      }
      if(money>=1){
         for(int i=1; ; i++){
            money -= 1;
            count1++;
            if(money<1){
               break;
            }
         }
      }      
   }
   
   printf("6�� - %d�� \n", count6);      
   printf("5�� - %d�� \n", count5);
   printf("4�� - %d�� \n", count4);
   printf("1�� - %d�� \n", count1);   

   return 0;
}
