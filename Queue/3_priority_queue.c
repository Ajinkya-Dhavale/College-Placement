#include<stdio.h>
#define size 20
struct pqueue
{
	int item[size];
	int priority[size];
	int rear,front;
};
void init(struct pqueue *);
void enqueue(struct pqueue *q,int,int);
int dequeue(struct pqueue *q);
int peek(struct pqueue *q);
int isempty(struct pqueue *q);
int isfull(struct pqueue *q);

int main()
{
	struct pqueue q;
	int choice,val,pri;
	init(&q);
	do
	{
		printf("\n1->insert");
		printf("\n2->delete");
		printf("\n3->peek");
		printf("\n4->exit");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter value to be insert");
			       scanf("%d",&val);
			       printf("\nEnter priority ");
			       scanf("%d",&pri);
			       enqueue(&q,val,pri);
			       printf("\nValue is inserted");
			       break;
			case 2:val=dequeue(&q);
			       printf("\nDeleted value=%d",val);
			    break;
            case 3:val=peek(&q);
                   printf("\nPeeked value=%d",val);
			       break;
			case 4:break;
		}
	}while(choice!=4);
	}

void init(struct pqueue *q)
{
	q->rear=0;
	q->front=0;
}
void enqueue(struct pqueue *q,int val,int pri)
{
	int i;
	if(q->rear==size-1)
	{
		printf("\nqueue is full");
		return;
	}
	else
	{
	  
	  if(q->rear==0)
	    {
	    	q->item[q->rear]=val;
	    	q->priority[q->rear]=pri;
	    	(q->rear)++;
	    }        
	    else
	    {
	    		for(i=q->rear-1;i>=0;i--)
	    		{       
	    			if(pri>q->priority[i])
	    			{
	    		q->priority[i+1]=q->priority[i];
	    				q->item[i+1]=q->item[i];
	    				
					}
					else
					  break;
				}
				q->priority[i+1]=pri;
				q->item[i+1]=val;
				(q->rear)++;
			}
		
	
}}
int dequeue(struct pqueue *q)
{
	int val;
	if(q->rear==q->front)
	{
		printf("\nqueue is empty");
		return -1;
	}
	val=q->item[q->front];
	(q->front)++;
	return(val);
}
  
  int peek(struct pqueue *q)
{
	int val;
	if(q->rear==q->front)
	{
		printf("\nqueue is empty");
		return -1;
	}
	val=q->item[q->front];
	
	return(val);
}