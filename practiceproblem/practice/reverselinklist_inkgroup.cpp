class solution{
    public:
    Node*kReverse(Node*head,int k){
        if(head==NULL){
            return head;
        }
        Node*curr=head;
        Node*prev=NULL;
        Node*forward=NULL;
        int count=0;
        while(curr!=NULL && count< k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
            head->next=kReverse(forward,k);
        }
        return prev;
    }
};