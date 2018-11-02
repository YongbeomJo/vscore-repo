#include <stdio.h>

void print_arr(int arr[], int arr_len){
    int i;

    for(i=0; i<arr_len; i++)
        printf("%d", arr[i]);
    printf("\n");
}

void subset(int set[], int set_size, int n, int index){
    if(index == n){
        print_arr(set, set_size);
        return;
    }

    set[set_size] = index;
    subset(set, set_size+1, n, index+1); //among index

    subset(set, set_size, n, index+1);  //without index
}

#define MAXN 100
3
int main(void){
    int set[MAXN], n;
    printf("input n : ");
    scanf("%d", &n);

    subset(set, 0, n, 0);
    return 0;
}