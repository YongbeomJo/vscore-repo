#include <stdio.h>

#define AR_LENGTH 7

//print arr
void print_arr(int arr[], int arr_length){
    for(int i=0; i<arr_length; i++)
        printf("%d", arr[i]);
    printf("\n");
}

//check arr
int all_is(int arr[], int arr_length, int k){
    for(int i=0; i<arr_length; i++)
        if(arr[i]!=k)
            return 0;
    return 1;
}

//binary number count
int binarycheck(int b){
    int result = 0;
    int bin = 0;
    for(int i=1; 0<b; i*=10){
        bin = b%2;
        if(bin == 1)    
            result++;
        //result += binary*i; binary number result
        b /= 2;
        //printf("i=%d, b=%d, bin=%d, result=%d\n", i, b, bin, result);
    } //You can also use array;

    return result;
}

//making stack with linkedlist
int linked_stack(){

}

//making queue with double stacks
int doublestackqueue(){

}

//binary transform
int binarytransform(){

}

//compare arr
int comarr(){

}



int main(void){
    int array[AR_LENGTH] = {1, 1, 1, 1, 1, 1, 1};
    print_arr(array, AR_LENGTH);
    printf("%d\n", all_is(array, AR_LENGTH, 1));
    printf("%d\n", binarycheck(AR_LENGTH));


    return 0;
}