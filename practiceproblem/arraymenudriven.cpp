#include<iostream>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    cout<<"Element are :"<<endl;
    for(i=0;i<arr.length;i++){
        cout<<" "<<arr.A[i]<<endl;
    }
}
void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }
int Delete(struct Array *arr,int index){
    int x=0;
    int i;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=A[i+1];
            arr->length--;
            return x;
        }
        return 0;
    }
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
    }
    }
        return -1;
    }
    int binarysearch(struct Array arr,int key){
        int l,mid,h;
        h=arr.length-1;
        while(l<=h){
            mid=(l+h)/2;
            if(key==arr.A[mid]);
            return mid;
            else if(key<arr.A[mid])
            h=mid-1;
            else
            l=mid+1;
        }
        return -1;
    }
int Rbinsearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            return Rbinsearch(a,l,mid-1,key);
        }
        else
        return Rbinsearch(a,mid+1,h,key);
    }
}
return -1;
}
int Get(struct Array arr,int index){
    if(index>=0 && index<arr->length){
        return arr->A[index];
    }
        return -1;    }
}
void set(struct array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
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
float Avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}
void reverse(struct Array *arr){
    int i,j;
    for(int i=0;j=arr->length;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}
void insertsort(struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
int issorted(struct Array arr){
    int i;
    for(i=0;i<arr->length-1;i++){
    if (arr.A[i]>arr.A[i+1];
    return 0;
    }
    return 1;
}
void Rearrange(struct Array arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}
struct Array *merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else 
        arr3->A[k++]=arr2->A[j++];
    }
    for(i=0;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(j=0;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}
int main(){
    struct Array arr1;
    int ch,int x;
    cout<<"Enter size of array"<<endl;
    cin>>arr1.size;
    arr1.A=new[int];
    do{
    cout<<"Menu"<<endl;
    cout<<"1. insert"<<endl;
    cout<<"2. delete"<<endl;
    cout<<"3. search"<<endl;
    cout<<"4. sum"<<endl;
    cout<<"5. display"<<endl;
    cout<<"6.Exit"<<endl;

    cout<<"enter your choice"<<endl;
    cin>>ch;

switch (ch){
    case1: cout"Enter an element and index"<<endl;
    cin>>index;
    insert(arr1,index,x);
    break;

    case2: cout"Enter an  index"<<endl;
    cin>>index;
    x=delete(arr1,index);
    cout<<"deleted element is "<<x<<endl;
    break;

    case3: cout"Enter an element to search"<<endl;
    cin>>x;
    index=linearsearch(arr1,x);
    cout<<" Element index" <<index<<endl;
    break;

    case4: cout"sum is "<<sum(arr1)<<endl;
    break;

    case 5:display(arr1);
    }
    }while(ch<6);
    return(0);
    }





  






