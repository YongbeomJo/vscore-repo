#include <stdio.h>


#define M 100
#define N 100

int map[M][N];

int max_joy(int m, int n){
    //dynamic programing
    if(m == 0 && n == 0)
        return map[0][0];
    
    if(m==0)
        return max_joy(m, n-1) + map[m][n];

    if(n==0)
        return max_joy(m-1, n) + map[m][n];

    return max(max_joy(m-1, n), max_joy(m, n-1) + map[i][j]);
}

int main(){
    int m, n, i, j;

    printf("input m, n : ");    
    scanf("%d %d", &m, &n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &map[i][j]);
    printf("%d\n", max_joy(m-1, n-1));
    return 0;
    
}