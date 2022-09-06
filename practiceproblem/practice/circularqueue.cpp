#include<iostream>
using namespace std;
class circularqueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    circularqueue(int n){
        size=n;
        arr=new int[size];
        front=rear=-1;
    }
    void enqueue(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1 ){
            front=rear=0;
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
        }
    }
    int dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
        
    }
};