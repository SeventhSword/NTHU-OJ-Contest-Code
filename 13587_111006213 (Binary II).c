#include <stdio.h>
void calculate(int a)
{
	int b[32];
	int c = 0;
	while (a > 0) {

		b[c] = a %2;
		a = a /2;
		c++;
	}
	for (int d= c - 1; d >= 0; d--){
		printf("%d", b[d]);
	}
}
int main()
{
    int a;
    scanf("%d", &a);
    if(a==0){
        printf("0\n");
    }
    else{
	calculate(a);
	printf("\n");
    }
	return 0;
}
