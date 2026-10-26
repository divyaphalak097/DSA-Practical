#include <stdio.h>
#define MAX 5
int queue[MAX], front = 0, rear = -1;
void enqueue(int x)
{
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
        queue[++rear] = x;
}
void dequeue()
{
    if (front > rear)
        printf("Queue Underflow\n");
    else
        printf("Dequeued element: %d\n", queue[front++]);
}
void display()
{
    int i;
    if (front > rear)
        printf("Queue is empty\n");
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
