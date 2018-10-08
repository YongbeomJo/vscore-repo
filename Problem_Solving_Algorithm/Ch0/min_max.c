//input three int, calculate min, max
#include <stdio.h>

int min(int x, int y, int z){
    if(x < y && x < z){
        return x;
    }
    else if(y < x && y < z){
        return y;
    }
    return z;
}

int max(int x, int y, int z){
    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    return z;
}

int main(void){
    int x = 1, y = 2, z = 3;
    //printf("please input three integer number : ");
    //scanf("%d %d %d", &x, &y, &z);
    printf("Min is %d, and Max is %d\n", min(x, y, z), max(x, y, z));
    return 0;
}

/* examle code

int min(int x, int y){
    if (x < y)
        return x;

    return y;
}
int max(int x, int y){
    if (x > y)
        return x;
    
    return y;
}

*/

/* calc arr
int max_arr(int arr[], int arr_len){
    int maxa, i;
    maxa = arr[0];
    for(i = 0; i < arr_len, i++)
        if(arr[i] > maxa)
            maxa = arr[i];
    
    return maxa;
}
*/