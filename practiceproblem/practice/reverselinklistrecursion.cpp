class solution
{
public:
    Node *reverse(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        int Reverse = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return Reverse;
    }
}