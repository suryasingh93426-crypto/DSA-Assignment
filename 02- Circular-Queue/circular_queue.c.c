#include <stdio.h>

#define MAX 5

int queue[MAX];

int front = -1;
int rear = -1;

// ENQUEUE operation
void enqueue(int x)
{
    // Check if queue is full
    if ((rear + 1) % MAX == front)
    {
        printf("\nQueue Overflow! Queue is full.\n\n");
        return;
    }

    // First element
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = x;

    printf("%d inserted into queue.\n", x);
}

// DEQUEUE operation
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }

    printf("%d deleted from queue.\n", queue[front]);

    // If only one element is present
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

// FRONT operation
void getFront()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front element is: %d\n", queue[front]);
}

// DISPLAY operation
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements are: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
        {
            break;
        }

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    // Queue is full
    enqueue(60);

    display();

    getFront();

    dequeue();
    dequeue();

    display();

    // Reusing empty positions
    enqueue(60);
    enqueue(70);

    display();

    return 0;
}