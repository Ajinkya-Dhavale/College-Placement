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
    struct stack s1;
    init(&s1);
    char s[100],ch,temp;
    int i,flag=1;
    
    printf("Enter Any Expression : ");
    scanf("%[^\n]s",&s);

    for(i=0;s[i]!='\0';i++)
    {
        ch=s[i];
        if(ch=='(' || ch=='[' || ch=='{' )
        {
            push(&s1,ch);
        }
        else if(ch==')' || ch==']' || ch=='}')
        {
            if(isEmpty(&s1))
            {
                flag=0;
                break;
            }
            temp=pop(&s1);
            switch(ch)
            {
                case ')': 
                        if(temp!='(')
                        {
                            flag=0;
                        }
                        break;
                case ']': 
                        if(temp!='[')
                        {
                            flag=0;
                        }
                        break;
                case '}': 
                        if(temp!='{')
                        {
                            flag=0;
                        }
                        break;
            }
        } 
    }

    if(flag==0 || !isEmpty(&s1))
    {
        printf("Expression is not valid");
        return 0;
    }
    printf("Expression is Valid");

    return 0;
}
