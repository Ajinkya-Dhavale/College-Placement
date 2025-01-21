#include<stdio.h>
#define SIZE 5

struct stack{
    int top;
    int item[SIZE];
};

void init(struct stack *s)
{
    s->top=-1;
}

void push(struct stack *s,int val)
{
    if(s->top == SIZE-1)
    {
        printf("Stack is full\n");
    }
    else{
        s->item[++s->top]=val;
    }
}

int pop(struct stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return s->item[s->top--];
    }
}

int pip(struct stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return s->item[s->top];
    }
}

int isFull(struct stack *s)
{
    return (s->top==SIZE-1) ? 1 : 0;
}

int isEmpty(struct stack *s)
{
    return (s->top==-1) ? 1 : 0;
}

int main()
{
    struct stack s;
    init(&s);

    push(&s,1);
    push(&s,2);
    push(&s,3);
    push(&s,4);
    push(&s,5);
    push(&s,6);

    // printf("%d\n",pop(&s));
    // printf("%d\n",pop(&s));
    // printf("%d\n",pop(&s));
    // printf("%d\n",pop(&s));
    // printf("%d\n",pop(&s));
    // printf("%d\n",pop(&s));
    printf("%d\n",isEmpty(&s));
    printf("%d\n",isFull(&s));
    return 0;
}
