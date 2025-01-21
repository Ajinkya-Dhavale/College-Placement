#include<stdio.h>
#define SIZE 100

struct stack{
    int top;
    char item[SIZE];
};

void init(struct stack *s)
{
    s->top=-1;
}

void push(struct stack *s,char val)
{
    if(s->top == SIZE-1)
    {
        printf("Stack is full\n");
    }
    else{
        s->item[++s->top]=val;
    }
}

char pop(struct stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return '\0';
    }
    else
    {
        return s->item[s->top--];
    }
}

char pip(struct stack *s)
{
    if(s->top == -1)
    {
        printf("Stack is empty\n");
        return '\0';
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
    int i;
    char arr[]="Ajinkya Balasaheb Dhavale";//elavahD bahasalaB ayknijA
    for(i=0;arr[i]!='\0';)
    {
        char ch=arr[i];
        while(ch!=' ' && ch!='\0')
        {
            push(&s,ch);
            i++;
            ch=arr[i];
        }
        while(!isEmpty(&s))
        {
            printf("%c",pop(&s));
        }
        while(ch==' ')
        {
            printf("%c",ch);
            i++;
            ch=arr[i];
        }
    }
    return 0;
}
