/*Anya ASCII*/
#include<stdio.h>
int main()
{
    char code[5];/*assign array to keep data*/dsds
    int a;
    scanf("%s", code);

    for(a=0; code[a]!='\0';a++){/*start at slot 1 of array; repeat until a reach end of array; move 1 slot after completing the process*/
        if(code[a]>= 'a' && code[a] <='z'){
            code[a]= 'Z'-(code[a]-'a');
        }

    }

    printf("%s", code);
    printf("\n");
    return 0;
}
