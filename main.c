#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node{
    int data;
    struct node *next;
    };

    struct node *head,*temp,*newnode;
    int n,i;
    head=NULL;
    printf("Enter the size");
    scanf("%d",&n);
     printf("Enter the data");
    for(i=0;i<n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    }

    temp=head;
    for(i=0;i<n;i++){
    printf("%d",temp->data);
    temp=temp->next;
    }

}
