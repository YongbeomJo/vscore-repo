#include <stdio.h>

#define MAXN 200

long long combination(int n, int r){
    
    //memoization - remove duplicate 
    static long long memo[MAXN][MAXN];
    
    if(memo[n][r] > 0)
        return memo[n][r];
    
    if(r==0||n==r)
        return memo[n][r] = 1;
    
    return memo[n][r] = combination(n-1, r-1) + combination(n-1, r);

    /* original
    if(r==0||n==r)
        return 1;
    return combination(n-1, r-1) + combination(n-1, r);
    */
}

int main(void){
    int n, r;

    printf("input n, r : ");
    scanf("%d %d", &n, &r);
    printf("%lld\n", combination(n, r));
    return 0;
}