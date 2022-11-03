#include<stdio.h>
int main(){
int size, search;
scanf("%d %d", &size, &search);
int map[1010];
for(int i=0; i<size; i++)
    scanf("%d", &map[i]);
int fail=1;
for(int i=0; i<size-search+1; i++){
    int pass =1;
    for (int k=i+1; k<i+search-1; k++){
        if(map[k]<=map[i]|| map[k]<=map[i+search-1]){
            pass=0;
        }
    }
    if(pass){
        fail=0;
        printf("%d", map[i]);
        for(int k=i+1; k<=i+search-1; k++){
            printf(" %d", map[k]);
        }
        printf("\n");
    }
}
    if(fail){
        printf("Domo\n");
    }
return 0;
}

/*#include <stdio.h>

int main()
{
    int size, search;
    scanf("%d %d", &size, &search);
    int map[1010];
    for (int i=0; i < size; i++)
        scanf("%d", &map[i]);
    int fail=1;
    for (int i=0; i < size - search + 1; i++)
    {
        int pass=1;
        for (int k=i+1; k < i+search-1; k++)
            if (map[k] <= map[i] || map[k] <= map[i+search-1]){
                pass=0;
            }
        if (pass)
        {
            fail=0;
            printf("%d", map[i]);
            for (int k=i+1; k <= i+search-1; k++){
                printf(" %d", map[k]);
            }
            printf("\n");
        }
    }
    if (fail)
        printf("Domo\n");
return 0;
}
*/
