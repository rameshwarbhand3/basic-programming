#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
Node*newNode(int data){
    Node*temp=new Node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
Node*insert(Node*root,int key){
    if(root==NULL)return newNode(key);
    if(key<root->data){
        root->left=insert(root->left,key);
    }
    if(key>root->data){
        root->right=insert(root->right,key);
    }
    return root;
}
void*inorder(Node*root){
    if(root==NULL)return NULL ;
    inorder(root->left);
    cout<<root->data<<"";
    inorder(root->right);
}
Node*Delete(Node*root,int key){
    if(root==NULL)return root;
    if(key<root->data){
        root->left=Delete(root->left,key);
    }
    if(key>root->data){
        root->right=Delete(root->right,key);
    }
    else{
        if(root->left==NULL && root->right==NULL)
        return NULL;
        else if(root->left==NULL){
        Node*temp=root->right;
        free(root);
        return temp;
        }
        else if(root->right==NULL){
        Node*temp=root->left;
        free(root);
        return temp;
        }
    }
    return root;
}
Node*search(Node*root,int key){
    if(root==NULL || root->data==key){
        return root;
    }
    if(key>root->data)
    return search(root->left,key);
    else
    return search(root->right,key);
}
int main(){
    Node*root=NULL;
    insert(root,10);
    insert(root,24);
    insert(root,49);
    inorder(root);
    return (0);
}

