#include<iostream>
using namespace std;
struct Array {
    int A[10];
    int size;
    int length;
};
void display(struct Array arr){
    int i=0;
    cout<<"Array element are "<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return -1;
}
int set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length);
    return arr->A[index]=x;
}
int max(struct Array arr){
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max);
        max=arr.A[i];
    }
    return max;
}
int min(struct Array arr){
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min);
        min=arr.A[i];
    }
    return min;
}
int sum(struct Array arr){
    int s=0;
    int i;
    for(i=0;i<arr.length;i++){
        s=s+arr.A[i];
    }
    return s;

}
float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    cout<<min(arr)<<endl;
    display(arr);
    return(0);
}