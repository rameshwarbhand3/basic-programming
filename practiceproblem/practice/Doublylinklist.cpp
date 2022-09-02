#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
void insertAthead(Node *head, Node *tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAttail(Node *head, Node *tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtposition(Node *head, Node *tail, int position, int d)
{
    if (position == 1)
    {
        insertAthead(head, tail, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAttail(head, tail, d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev == temp;
}
void deleteNode(Node *head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next = NULL;
        temp->next->prev = NULL;
        head = temp->next;
        delete temp;
    }
    Node *curr = head;
    Node *prev = NULL;
    int count = 1;
    while (count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    delete (curr);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAthead(head, tail, 1);
    print(head);

    return (0);
}