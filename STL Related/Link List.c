#include<stdio.h>
#include<stdlib.h>

struct node
{
    int date;
     struct node *next;
};

int main()
{
    struct node *temp,*head = NULL,*tail = NULL;

    temp =  (struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->date);
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }

    printf("%d",temp->date);

    return 0;
}
