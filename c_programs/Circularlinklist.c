#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}
void traverse_list(struct node*head){
    struct node*ptr=head;
    do{
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node*insertatfirst(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head->next;
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
      third=(struct node*)malloc(sizeof(struct node));
       fourth=(struct node*)malloc(sizeof(struct node));
head->data=4;
head->next=second;
second->data=3;
second->next=third;
third->data=6;
__third->next=fourth;
fourth->data=1;
fourth->next=head;
linklisttraversal(head);
head=insertatfirst(head,80);
traverse_list







}
}