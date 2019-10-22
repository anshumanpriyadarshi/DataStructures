#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void delete(int n){
    int i;
    struct node* temp1=(struct node*)malloc(sizeof(struct node));

    temp1=head;
    
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    else{
        struct node* temp2=(struct node*)malloc(sizeof(struct node));
        for(i=1;i<n-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;

        free(temp2);
    }

}

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

    int pos;
    insert(5);
    insert(4);
    insert(0);
    insert(6);
    insert(3);
    insert(1);
    display();
    printf("Enter a position to delete a node \n");
    scanf("%d",&pos);
    delete(pos);
    display();
    return 0;

}