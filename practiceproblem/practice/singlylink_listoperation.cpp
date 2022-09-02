#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = NULL;
    //constructor.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtposition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next = NULL)
    {
        insertAttail(tail, d);
        return;
    }
    Node *Nodetoinsert = new Node(d);
    Nodetoinsert->next = temp->next;
    temp->next = Nodetoinsert;
}
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *head = NULL;
    Node*tail=NULL;
    insertAthead(head, 1);
    insertAthead(head, 4);
    insertAthead(head, 6);
    insertAthead(head, 7);
    insertAthead(head, 5);
    cout << "After insertion at head :" << endl;
    print(head);
  
    deleteNode(2,head);
    cout<<"After deletion :"<<endl;
    print(head);
    insertAtposition(head,tail,6,10);
    print(head);

    return (0);
}