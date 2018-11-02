#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int arr_length){
    for(int i=0; i<arr_length;i++)
        printf("%d ", arr[i]);
}

int all_is(int arr[], int arr_length){
    for(int i=0; i<arr_length;i++)
        if(arr[i]!=arr[i+1])
            return 1;
    return 0;
}

int main(void){
    int ary[3] = {1, 2, 3};
    print_arr(ary, sizeof(ary)/sizeof(int));
    printf("\n%d", all_is(ary, sizeof(ary)/sizeof(int)));
    return 0;
}