#include<stdio.h>
#include<math.h>
int main(){
int a;
while (scanf("%d", &a)!=EOF){
    int b,c,d=0,e,f,g=0;
    b=a;
    c=a;
    while(b>0){
        b/=10;
        d++;
    }
    while (c>0){
        e=c%10;
        f=pow(e,d);
        g+=f;
        c/=10;
    }
    if(g==a){
        printf("Yes it is.\n");
    }
    else{
        printf("No it is not.\n");
    }
}
return 0;
}
