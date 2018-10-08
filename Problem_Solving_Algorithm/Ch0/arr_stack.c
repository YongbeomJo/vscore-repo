#include <stdio.h>

#define STACK_CAPACITY 8

int stack[STACK_CAPACITY];
int top = 0;
int stack_size = 0;

void insert(int n){
    if (stack_size == STACK_CAPACITY) {
        printf("stack full!\n");
        return;
    }
    stack[top] = n;
    top++;
    stack_size++;
}

int delete(){
    int r;
    if (stack_size == 0){
        printf("stack empty!\n");
        return 0;
    }
    top--;
    r = stack[top];
    stack_size--;
    return r;
}

int main(){
    int number, r;
    do{
        printf("input number : ");
        scanf("%d", &number);

        if(number > 0){
            insert(number);
        }
        else if(number == 0){
            r = delete();
            printf("[%d]\n", r);
        }

    } while(number >=0);
    return 0;
}