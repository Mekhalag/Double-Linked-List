#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	int number; 
	struct node *next;
    struct node *prev;
}node;
void print(node *ref)
{
    while(ref!=NULL)
{
    printf("%d\n", ref->number);
    ref=ref->next;
}
}
int main(void)
{

    struct node *head = NULL;
    struct node *last = NULL;
    struct node *numbers = NULL;

	while(1)
	{
		int num;
		printf("\nenter you number: ");
		scanf("%d", &num);
	
		if (num != 0)
		{
		
		node *n = malloc(sizeof(node));

		if(!n)
		{
			return 1;		
		}

		n-> number =num;
		n-> next = NULL;
        n-> prev = NULL;

        if(head==NULL) 
         head = n;

		if(numbers)
        	{
			for (node *ptr =numbers; ptr!=NULL; ptr=ptr->next)
            {
			if(ptr->next == NULL)
			{
				n->prev= head;
                last=n;
                ptr->next=last;
				break;
			}
		}
            }
		else
		{
			numbers=n;		
		}
        }
        else if (num==0)
        break;

	}	
    printf("\nEnter the number you want to replace");
    int old, recent;
    scanf("%d", &old);
    printf("\nEnter the new number");
    scanf("%d", &recent);
    node *current=numbers;
    while(current!=NULL)
    {
        if(current->number==old)
        current->number=recent;

        current=current->next;
    }
    print(numbers);
}
