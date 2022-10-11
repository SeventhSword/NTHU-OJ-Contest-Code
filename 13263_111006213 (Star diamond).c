#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d", &a);
    b=a;
    b%=2;
    if(b==0){
        printf("Stop drawing fake diamonds!\n");
    }
    else if(b!=0){
        for (int c=1; c<=a; c+=2){
            for(int d=c; d<a; d+=2){
                printf(" ");
            }
            for (int e=1;e<=c;e++){
                printf("*");
            }
            printf("\n");
        }
        for(int c=a-2;c>=0;c-=2){
            for(int d=a;d>c;d-=2){
                printf(" ");
            }
            for (int e=1;e<=c; e++){
                printf("*");
            }
            printf("\n");
        }
    }
return 0;
}
