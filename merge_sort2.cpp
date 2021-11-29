#include<iostream>
using namespace std;

void mergesort(int*,int,int);
void merge(int*,int,int,int);
void print(int *);
//int a[10];
int main(){
    int a[]={1,4,3,2,7,6,5,9,8,20};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;

    mergesort(a,0,n-1);

    print(a);
}

void mergesort(int a[],int beg,int end){
       if(beg<end){
           int mid=(end+beg)/2;
           mergesort(a,beg,mid);
           mergesort(a,mid+1,end);
           merge(a,beg,mid,end);
       }
       
}

void merge(int a[],int beg,int mid,int end){
    int size1=mid-beg+1;
    int size2=end-mid;

    int left[size1];
    int right[size2];

    for(int i=0;i<size1;i++){
        left[i]=a[beg+i];
    }

    for(int j=0;j<size2;j++){
        right[j]=a[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=beg;
    //int b[k];
    while(i<size1 && j<size2){
        if(left[i]<right[j]){
            a[k]=left[i];
            i=i+1;
            k++;
        }
        else{
            a[k]=right[j];
            j=j+1;
            k++;
        }
       // k++;
    }
    while(i<size1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<size2){
        a[k]=right[j];
        j++;
        k++;
    }
    
}
void print(int a[]){
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}