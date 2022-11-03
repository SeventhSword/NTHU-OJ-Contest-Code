#include<stdio.h>

int first_matrix[2105][2105];
int second_matrix[2105][2105];
int trans[2105][2105]={0};
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &first_matrix[i][j]);

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &second_matrix[i][j]);

    for (int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<m; k++)
                trans[j][i] += first_matrix[i][k] * second_matrix[k][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
            printf("%d ", trans[i][j]);
        printf("%d\n", trans[i][n-1]);
    }

    return 0;
}
