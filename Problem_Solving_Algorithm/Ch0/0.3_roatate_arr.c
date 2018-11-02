#include <stdio.h>

void right_rotate(int arr[], int s, int t){
    int i, last;

    last = arr[t];
    for(i=t; i>s; i--)
        arr[i] = arr[i-1];
    arr[s] = last;
}

int main(void){
    int s, t;
    printf("input num(s t) : ");
    scanf("%d %d", &s, &t);
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    right_rotate(arr, s, t);
    for(int i=0; i<8; i++)
        printf("%d", arr[i]);
    
    return 0;
}