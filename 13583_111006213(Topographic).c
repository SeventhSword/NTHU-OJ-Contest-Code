#include<stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d", &a);
for(b=1; b<=a; b++){
    for(c=1; c<=a-b; c++){
        printf(" ");
    }
    for(d=1; d<=b; d++){
        printf("%d", d);
    }
    for(e=b-1; e>=1; e--){
        printf("%d", e);
    }
    printf("\n");
}
for(b=1; b<=a-1; b++){
    for(c=1; c<=b; c++){
        printf(" ");
    }
    for(d=1; d<=a-b; d++){
        printf("%d", d);
    }
    for(e=(a-b)-1; e>=1; e--){
        printf("%d", e);
    }
    printf("\n");
}
return 0;
}