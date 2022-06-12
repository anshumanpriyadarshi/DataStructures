#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int elem){
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
    temp->data = elem;
     temp->next=head;
     head=temp;       
    
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
    head=NULL;
    insert(5);
    insert(2);
    insert(4);
    insert(6);
    display();
    return 0;

}