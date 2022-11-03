#include<stdio.h>
int main(){
int n,m,Q,q,start[101], direction, x,i,j;
char current_m, map[501][501], dirp[2][6]={"Left", "Right"};
scanf("%d %d\n", &n, &m);
for(i=1; i<=n; i++){
    for(j=1; j<=m; j++){
        scanf("%c", &map[i][j]);
    }
    scanf("\n");
}
scanf("%d\n", &Q);
for(q=1; q<=Q; q++){
    scanf("%d", &start[q]);
}
for(q=1; q<=Q; q++){
    for(i=1, j=start[q]; i<=n; i++){
        current_m=map[i][j];
        if(current_m==47){
            direction=0;
            x=-1;
        }
        else if(current_m==92){
            direction=1;
            x=1;
        }
        if(j+x<1 || j+x>m){
            printf("%s!\n", dirp[direction]);
            break;
        }
        else if(map[i][j+x]==current_m){
            j+=x;
            if(i==n){
                printf("Position: %d\n", j);
                break;
            }
        }
        else if(map[i][j+x]!=current_m){
            printf("Stuck QQ\n");
            break;
        }
    }
}
    return 0;
}
/*
#include<stdio.h>
int main(){
int n,m,Q,q,start[101],direction,x, i,j;
char current_m, map[501][501], dirp[2][6]={"Left", "Right"};
scanf("%d %d\n", &n, &m);
for( i=1; i<=n; i++){
    for( j=1; j<=m; j++){
        scanf("%c", &map[i][j]);
    }
    scanf("\n");
}
scanf("%d\n", &Q);
for(q=1; q<=Q; q++){
    scanf("%d", &start[q]);
}
for(q=1; q<=Q; q++){
    for( i=1, j=start[q]; i<=n; i++){
        current_m=map[i][j];
        if(current_m==47){
            direction=0;
            x=-1;
        }
        else if(current_m==92){
            direction=1;
            x=1;
        }
        if(j+x<1 || j+x>m){
            printf("%s!\n", dirp[direction]);
            break;
        }
        else if(map[i][j+x]==current_m){
            j+=x;
            if(i==n){
                printf("Position: %d\n",j);
                break;
            }
        }
        else if(map[i][j+x]!=current_m){
            printf("Stuck QQ\n");
            break;
        }
    }
}
return 0;
}
*/

