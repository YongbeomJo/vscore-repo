#include <stdio.h>

#define MAXN 100

int weight[MAXN], value[MAXN], capacity;
int max_set[MAXN], max_set_size = 0, max_value = 0;

void print_arr(int arr[], int arr_len){
    int i;

    for(i=0; i<arr_len; i++)
        printf("%d", arr[i]);
    printf("\n");
}

void evaluate_knapsack(int set[], int set_size){
    int current_volume = 0, current_value = 0, current_weight = 0, i;

    for(i=0; i<set_size; i++){
        current_weight += weight[set[i]];
        current_value += value[set[i]];
    }
    if(current_volume > capacity)
        return;
    
    if(current_value > max_value) {
        max_value = current_value;
        max_set_size = set_size;
        for(i=0; i<set_size; i++)
            max_set[i] = set[i];
    }
}

void subset_knapsack(int set[], int set_size, int n, int index){
    if(index == n){
        evaluate_knapsack(set, set_size);
        return;
    }
    set[set_size] = index;
    subset_knapsack(set, set_size+1, n, index+1);
    subset_knapsack(set, set_size, n, index+1);
}

int main(void){
    int set[MAXN], n, i;

    printf("please input n, capacity : ");
    scanf("%d %d", &n, &capacity);
    for(i=0; i<n; i++){
        printf("please input %d value : ", i);
        scanf("%d", &value[i]);
    }
    for(i=0; i<n; i++){
        printf("please input %d weight : ", i);
        scanf("%d", &weight[i]);
    }

    subset_knapsack(set, 0, n, 0);
    printf("MAX VALUE : %d\n", max_value);
    print_arr(max_set, max_set_size);
    return 0;
}
