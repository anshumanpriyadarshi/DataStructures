#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head;

void insert(int elem){

    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    struct node* temp2 = (struct node*)malloc(sizeof(struct node));

    temp1->data = elem;
    if(head==NULL){
        temp1->next=head;
        head=temp1;
        return;
    }
    else
    {
        temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp1;
        temp1->next=NULL;
        return;
    }
    
}


void display(){

     struct node* temp;
    temp=head;
    printf("List is:\n");
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}

int main(){
    head = NULL;
    insert(5);
    insert(4);
    insert(10);
    insert(6);
    display();

}