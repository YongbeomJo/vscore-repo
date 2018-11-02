#include <stdio.h>

#define MAX 50

int divide_num(int num, int arg[]){

    int result;

    


    return result;
}

int main(void){
    int num, int arg_num;
    int arg[MAX];

    printf("input number : ");
    scanf("%d", &num);
    printf("input arg's num : ");
    scanf("%d", &arg_num);
    printf("input args : ");
    for(int i=0; i<arg_num; i++)
        scanf("%d", &arg[i]);
    
    divide_num(num, arg);
    return 0;

}