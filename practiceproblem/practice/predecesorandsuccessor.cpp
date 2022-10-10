#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;
};
pair<int,int>predecessorsuccessor(TreeNode*root,int key){
    //find key
    TreeNode*temp=root;
    int pred=-1;
    int succ=-1;
    while(temp->data!=key){
        if(temp->data>key){
            succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right;
        }
    }
    //find pred and succ
    TreeNode*lefttree=temp->left;
    while(lefttree!=NULL){
        pred=lefttree->data;
        lefttree=lefttree->right;

    }
    TreeNode*righttree=temp->right;
    while(righttree!=NULL){
        succ=righttree->data;
        righttree=righttree->left;
    }
    pair<int,int>ans={pred,succ};
    return ans;
}
