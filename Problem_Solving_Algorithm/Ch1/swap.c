#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int x = 1, y = 2;
    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}

/* arr swap
void swap_arr(int arr[], int i, int j){
    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
*/