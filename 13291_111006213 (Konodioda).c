/*#include<stdio.h>
int mat[2049][2049]={0};
int main(){
int size, border, times;
scanf("%d", &times);
scanf("%d", &size);
border=size-1;
while(times--){
    int row[2049]={0};
    int col[2049]={0};
    int diag1[4099]={0};
    int diag2[4099]={0};
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j]==255){
                row[i]+=1;
                col[j]+=1;
                diag1[i-j+border]+=1;
                diag2[i+j]+=1;
            }
        }
    }
        unsigned long long int ans=0;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                int num_diag1=(i-j>0)? size-(i-j): size+(i-j);
                int num_diag2=(i+j>=size)? 2*size-(i+j+1):i+j+1;
                if(row[i]==size && col[j]==size && diag1[i-j+border]==num_diag1 && diag2[i+j]==num_diag2){
                    ans++;
                }
            }
        }
    printf("%lld\n", ans);
}
return 0;
}*/

    #include<stdio.h>
    int mat[2049][2049];
    int main(){
    int size, border, times;

    scanf("%d", &times);
    scanf("%d", &size);
    border=size-1;
    while(times--){
        int row[2049];
        int col[2049];
        int diag1[4099];
        int diag2[4099];
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                scanf("%d", &mat[i][j]);
                if(mat[i][j]==255){
                    row[i]+=1;
                    col[j]+=1;
                    diag1[i-j+border]+=1;
                    diag2[i+j] +=1;
                }
            }
        }
            unsigned long long int ans =0;
            for(int i=0; i<size; i++){
                for(int j=0; j<size; j++){
                    int num_diag1= (i-j>0)? size-(i-j): size+(i-j);
                    int num_diag2= (i+j>=size)? 2*size-(i+j+1): i+j+1;
                    if(row[i]==size&&col[j]==size && diag1[i-j+border]==num_diag1 && diag2[i+j]==num_diag2){
                        ans++;
                    }
                }
            }
            printf("%11d\n", ans);
    }
      return 0;
    }


