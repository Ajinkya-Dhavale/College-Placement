#include<stdio.h>
#define n 5

struct queue{
    int front,rear;
    int data[n];
};

void init(struct queue *q)
{
    q->front=n-1;
    q->rear=n-1;
}

void enqueue(struct queue *q,int val)
{
    if((q->rear+1)%n == q->front)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->data[(++q->rear)%n]=val;
    }
}

int delete(struct queue *q)
{
    int val;
    if(q->rear == q->front)
    {
        printf("Queue is empty\n");
    }
    else
    {
        val= q->data[(++q->front)%n];
    }
    return val;
}

int peek(struct queue *q)
{
    int val;
    if(q->rear == q->front)
    {
        printf("Queue is empty\n");
    }
    else
    {
        val= q->data[(q->front+1)%n];
    }
    return val;
}

int isEmpty(struct queue *q)
{
    if(q->rear==q->front)
    {
        printf("queue is empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *q)
{
    if((q->rear+1)%n==q->front)
    {
        printf("queue is full\n");
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
     struct queue q;
    init(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50); 

    printf("Peek: %d\n", peek(&q));

    printf("Dequeued: %d\n", delete(&q));
    printf("Dequeued: %d\n", delete(&q));

    enqueue(&q, 60);
    enqueue(&q, 70);

    printf("Peek: %d\n", peek(&q));

    while (!isEmpty(&q)) {
        printf("Dequeued: %d\n", delete(&q));
    }

    printf("Dequeued: %d\n", delete(&q));

    return 0;
}