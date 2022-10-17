#include<stdio.h>
int main(){
int a,b[64][64];
int c; //pattern
int d[512], e[512], f;
int g=0, h=0, ans=0;
scanf("%d", &a);
for(int i=0; i<a; i++){
    for(int j=0; j<a; j++){
        scanf("%d", &b[i][j]);
    }
}
scanf("%d", &c);
for(int i=0; i<c; i++){
    for (int j=0; j<c; j++){
        int k;
        scanf("%d", &k);
        if (k==1){
            d[g] = i;
            e[g] = j;
            g++;
        }
    }
}
for(int i =0; i<=a - c;i++){
    for(int j=0; j<=a -c; j++){
        h=0;
        for (int l=0; l<g; l++){
            if (b[i+d[l]][j+e[l]] == 1){
                h++;
                //printf("
            }
        }
        if (h==g){
            ans++;
        }
    }
}
printf("%d\n", ans);
return 0;
}
