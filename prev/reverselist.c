#include<stdio.h>
#include<stdlib.h>
void print();

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;


void reverse(){
    struct node* prec;
    struct node* curr;
    struct node* temp;
    curr=head;
    prec=NULL;
    while(curr!=NULL){

            temp=curr->next;
            curr->next=prec;
            prec=curr;           
            curr=temp;
        
    }
    head=prec;

}


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
    void print(){

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
    insert(5);
    insert(0);
    insert(1);
    insert(7);
    insert(2);
    print();
     reverse();
     print();
    return 0;
}