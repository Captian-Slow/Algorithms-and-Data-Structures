#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
/*
    Create a stack using arrays dynamically
*/

struct Stack{

    int *array;
    int top;
    unsigned capacity;
};

struct Stack* create_new_stack(unsigned capacity){

    struct Stack* new_stack = (struct Stack*) malloc(sizeof(struct Stack));
    new_stack->capacity = capacity;
    new_stack->top = -1;    //Stack is empty
    new_stack->array = (int*) malloc(sizeof(int) * new_stack->capacity);
    return new_stack;
};

void stack_push(struct Stack* stack, int data){

    if( stack->top == (stack->capacity - 1)){

        printf("\nTop: %d\nCap: %d\n", stack->top, stack->capacity);
        printf("\nStack Overflow !");
        getch();
        return;
    }
    stack->array[++stack->top] = data;
    printf("\nPush successful");
    getch();
}

void stack_pop(struct Stack* stack){

    if(stack->top == -1){
        printf("\nStack Underflow !");
        getch();
        return;
    }
    printf("\nPop successful: %d", stack->array[stack->top--]);
    getch();
}

void stack_display(struct Stack* stack){

    int i = 0;
    printf("\nThe stack from top to bottom: ");
    for(i = stack->top; i >= 0; i--){
        printf("\n%d", stack->array[i]);
    }
    getch();
}

void main(){

    int stack_capacity, menu_choice, push_value;
    struct Stack* stack;
    printf("\nEnter stack size: ");
    scanf("%d", &stack_capacity);
    stack = create_new_stack(stack_capacity);   //Creating a stack dynamically

    //Menu Loop
    while(1){

        system("cls");
        printf("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.Exit\n\nEnter: ");
        scanf("%d", &menu_choice);
        switch(menu_choice){

            case 1:
                printf("\nEnter value to push: ");
                scanf("%d", &push_value);
                stack_push(stack, push_value);
                break;
            case 2:
                stack_pop(stack);
                break;
            case 3:
                stack_display(stack);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nWrong input !");
        }
    }
}
