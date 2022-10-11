#include<stdio.h>
#include<math.h>

int main(){
int cust,help;
scanf("%d", &cust); /*counting customers*/
int dish_num[512];
for (int dish =0; dish<cust;dish++){ /*Check menu*/
    scanf("%d",&dish_num[dish]);
}
scanf("%d",&help); /*The Hell loop*/
while(help--){/*complete reduce numbers of helps needed*/
    int left, right;/*range variables*/
    int max = 0;/*highest number occuring*/
    int val;/*answer*/
    scanf("%d %d",&left, &right); /*receive range values*/
    for (int trlt= left-1; trlt<=right-1;trlt++){ /*track left starts at left -1*/
        int hstr=0;/*highest number tracking starts at 0*/
        for(int trrt=left-1;trrt<=right-1;trrt++){ /*track right starts along with left -1*/
            if(dish_num[trlt] == dish_num[trrt]){/*check the nums*/
                hstr++;
            }
        }
        if(hstr == max){ /*check tracked number is equal to most occuring?*/
            if(dish_num[trlt] < val){/*if equal and answer is higher than smallest number then go to update*/
                val = dish_num[trlt]; /*if not the smallest number as ans then update ans*/
            }
        }
        if(hstr > max){/*if tracked number > high count*/
            max = hstr;
            val = dish_num[trlt]; /*update ans*/
        }
    }
    printf("%d\n",val);
}
return 0;
}
