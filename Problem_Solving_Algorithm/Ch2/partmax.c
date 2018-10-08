#include <stdio.h>

int max_consecutive_sum(int s[], int n){
    int i, j, k, sum, max_sum = s[0];

    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            sum = 0;
            for(k=i; k<=j; k++)
                sum += s[k];
            if(sum > max_sum)
                max_sum = sum;
        }
    }
    return max_sum;
}

int main(void){

    int arr[10] = {1, 2, -3, 4, 5, -6, 7, 8, 9};

    printf("%d", max_consecutive_sum(arr, sizeof(arr)/4));
    return 0;
}