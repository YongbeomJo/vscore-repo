#include <stdio.h>

int factorial(int f){
    int n = 1;
    for(int i=1; i<=f;i++)
        n *= i;
    return n;
}

//use recursion
int recfac(int f){
    if (f == 1)
        return 1;
    else
        return f * recfac(f-1);
}

int main(void){
    int num;
    printf("insert number : ");
    scanf("%d", &num);
    printf("result is %d\n", recfac(num));
    return 0;
}