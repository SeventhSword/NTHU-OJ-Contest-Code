#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d", &a);
if(a%2==0){
    printf("Stop drawing shitty drawings!\n");
}
else{
    for(b=1; b<=(a/2)+1; b++){
        for(c=1; c<=(a/2)+1-b; c++){
            printf(" ");
        }
        for(d=1; d<=(b*2)-1; d++){
            printf("*");
        }
        printf("\n");
    }
    for(b=1; b<=a/2; b++){
        for(c=1; c<=b; c++){
            printf(" ");
        }
        for(d=1; d<=a-(b*2); d++){
            printf("*");
        }
        printf("\n");
    }
}
return 0;
}
