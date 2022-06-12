#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void makecircle(){
    if(head==NULL || head->next==NULL){
        printf("Err!!!\n");
        exit(0);
    }
    else{
    struct node* temp;
    temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }

     temp->next=head;
    }
}

void insert(int elem){
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
    
    temp->data = elem;
    temp->next=head;
    head=temp;          
    //makecircle();
}

void display(){
    struct node* temp;
    temp=head;
    // printf("List is:\n%d \n",temp->data);
    // temp=temp->next;
    do
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }while(temp!=head);
    

}

int main(){
    head=NULL;
   // makecircle();
    insert(5);
    //makecircle();
    insert(2);
    //makecircle();
    insert(4);
    //makecircle();
    insert(6);
    makecircle();
    display();
    return 0;

}