#include<stdio.h>
int main(void){

    int num[100];

    int n=0;

    int a=0,b=999;

    for(int i=0;i<100;i++){

        scanf("%d",&num[i]);

        if(num[i]==999){

            break;

        }

        ++n;

    }

    for(int j=0;j<n;j++){

        if(a<num[j]){

            a=num[j];

        }

        if(b>num[j]){

            b=num[j];

        }

    }

    printf("max : %d\nmin : %d",a,b);

    return 0;

}
