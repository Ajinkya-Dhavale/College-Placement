#include<stdio.h>
#define SIZE 5

struct queue
{
    int rear, front;
    int data[SIZE];
};

void init(struct queue *q)
{
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct queue *q)
{
    return q->front == q->rear;
}

int isFull(struct queue *q)
{
    return q->rear == SIZE - 1;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->data[++q->rear] = val;
    }
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1; // Return a special value to indicate failure
    }
    else
    {
        return q->data[++q->front];
    }
}

int peek(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1; // Return a special value to indicate failure
    }
    else
    {
        return q->data[q->front + 1];
    }
}

int main()
{
    struct queue q;
    init(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6); // This will show "Queue is full"

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Peek: %d\n", peek(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q)); // This will show "Queue is empty"

    return 0;
}
