#include<stdio.h>
int main(){ //main function
int a,b,n;
scanf("%d %d %d", &a, &b, &n);
printf("%d\n", rev(a,b,n));
return 0;
}

int rev(int a, int b, int n){ //reverse function
if(n==0){
    return a;
}
else if(n==1){
    return b;
}
else{
    return rev(b, a-b, n-1); //b value becomes the new "a", a-b becomes the new "b", n-1 becomes the new "n"
}
}

