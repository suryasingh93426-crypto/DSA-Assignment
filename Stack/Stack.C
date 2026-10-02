// C Program : 

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH operation
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("\nStack Overflow! Stack is full.\n\n");
        return;
    }

    top++;
    stack[top] = x;

    printf("%d pushed into stack.\n", x);
}

// POP operation
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    printf("%d popped from stack.\n", stack[top]);
    top--;
}

// PEEK operation
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top element is: %d\n", stack[top]);
}

// DISPLAY operation
void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements are: ");

    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    // Trying to insert an extra element
    push(60);

    display();

    peek();

    pop();
    pop();

    display();

    return 0;
}
