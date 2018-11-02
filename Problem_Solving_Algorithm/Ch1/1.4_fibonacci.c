#include <stdio.h>

#define MAXN 200

long long fibo(int n){
    
    //memoization
    static long long memo[MAXN];

    if (memo[n] > 0)
        return memo[n];
    if (n==1 || n==2)
        return memo[n] = 1;
    else
        return memo[n] = fibo(n-1) + fibo(n-2);

    /* original
    if(n==1 || n==2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
    */

}

long long tribo(int n){
    if(n==0 || n==1 || n==2)
        return 0;
    else if(n==3)
        return 1;
    else
        return tribo(n-1) + tribo(n-2) + tribo(n-3);

}

long long tetra(int n){
    if(n==0 || n==1 || n==2 || n==3)
        return 0;
    else if(n==4)
        return 1;
    else
        return tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);
}

int main(void){
    int num;
    
    printf("input num : ");
    scanf("%d", &num);
    printf("fibo : %lld\n", fibo(num));
    printf("tribo : %lld\n", tribo(num));
    printf("tetra : %lld\n", tetra(num));

    return 0;
}