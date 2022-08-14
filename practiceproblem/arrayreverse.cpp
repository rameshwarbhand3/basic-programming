#include<iostream>
using namespace std;
struct Array {
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
void reverse(struct Array *arr){
    int i,j;
    int temp;
for(i=0,j=arr->length-1;i<j;i++,j--){
    temp=arr->A[i];
    arr->A[i]=arr->A[j];
    arr->A[j]=temp;
    }
}
int issorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]);
        return(0);
    }
    return 1;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    issorted(arr);
    display(arr);
    return(0);
}