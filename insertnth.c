#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void insert(int elem,int n){
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    

    temp1->data=elem;
    
    int i;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;

    }
    else{

        struct node* temp2 = (struct node*)malloc(sizeof(struct node));
        temp2=head;
    for(i=1;i<n-1;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
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
    insert(2,1);// 2
    insert(5,1);// 5,2
    insert(6,2);// 5,6,2
    insert(4,1);// 4,5,6,2
    insert(3,3);// 4,5,3,6,2
    display();
    return 0;
}