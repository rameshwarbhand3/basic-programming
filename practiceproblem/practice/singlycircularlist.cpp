#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << "";
        tail = tail->next;

    } while (tail != NULL);
    cout << endl;
}
void insertNode(Node *tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            Node *temp = new Node(d);
            temp->next = curr->next;
            curr->next = temp;
        }
    }
}
void deleteNode(Node*tail,int value){
    if(tail==NULL){
        cout<<"list is empty,please check again"<<endl;
        return;
    }
    else{
        Node*prev=tail;
        Node*curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
bool iscircular(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node*temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 6);
    print(tail);

    insertNode(tail, 6, 4);
    print(tail);

    insertNode(tail, 5, 4);
    print(tail);
    if(iscircular(tail)){
        cout<<"linklist is circular"<<endl;
    }
    else{
        cout<<"list is not circular"<<endl;
    }

    return (0);
}