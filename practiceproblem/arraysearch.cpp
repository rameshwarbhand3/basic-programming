#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    cout<<"Array element are "<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
int linearsearch(struct Array arr,int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]==key);
        return i;
    }
    return -1;
}
int binsearch(struct Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
        return mid;
        else if(key<arr.A[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
  printf("%d\n",linearsearch(arr,7));
    display(arr);
    return(0);
}