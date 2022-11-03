#include<stdio.h>
#include<string.h>
int main(){
char name[10005];
int temper;
scanf("%s", &name);
scanf("%d", &temper);
char guess;
int ic=0, pos=0;
while(scanf(" %c", &guess)!=EOF){
    if(guess=='/'){
        if(ic!=0){
            ic--;
        }
        else if(pos>0){
            pos-=1;
        }
        temper-=1;
        if(temper<=0){
            printf("SAYONARA\n");
            return 0;
        }
    }
    else if(guess=='!'){
        ic=0, pos=0;
        temper-=2;
        if(temper<=0){
            printf("SAYONARA\n");
            return 0;
        }
    }
    else{
        if(ic!=0){
            ic++;
            printf("no\n");
        }
        else if(guess==name[pos]){
            pos++;
            printf("%d\n", pos);
            if(pos==strlen(name)){
                printf("DAISUKI!\n");
                return 0;
            }
        }
        else{
            ic++;
            printf("no\n");
        }
    }
}
return 0;
}






/*    #include<stdio.h>
    #include<string.h>

    int main(){
    char name[10005];
    int temper;
    scanf("%s", &name);
    scanf("%d", &temper);
    int pos=0, ic=0;
    char guess;
    while(scanf(" %c", &guess)!=EOF){
        if(guess=='/'){
            if(ic!=0)
                ic--;
            else if(pos>0)
                pos--;
            temper-=1;
            if(temper<=0){
                printf("SAYONARA\n");
                return 0;
            }
        }
        else if(guess == '!'){
            pos=0, ic=0;
            temper-=2;
            if(temper<=0){
                printf("SAYONARA\n");
                return 0;
            }
        }
        else{
            if(ic!=0){
                ic++;
                printf("no\n");
            }
            else{
                if(guess==name[pos]){
                    pos++;
                    printf("%d\n", pos);

                    if(pos==strlen(name)){
                    printf("DAISUKI!\n");
                    return 0;
                }
                }
                else{
                    ic++;
                    printf("no\n");
                }
            }
        }
    }
    return 0;
    }
*/
