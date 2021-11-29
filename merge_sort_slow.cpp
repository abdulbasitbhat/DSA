#include<iostream>
using namespace std;

int mergesort(int*,int,int);
int merge(int*,int,int,int);
void print(int*);
//int a[7];
int main(){
    int A[7]={10,40,20,60,30,70,5};
    int beg=0;
    int end=6;
    mergesort(A,beg,end);
    //we need to change A array inside merge sort, then only A in main will change
    cout<<"hi"<<endl;
    print(A);
    
}

int mergesort(int A[],int beg,int end){ 
     if(beg<end){                            //false when only one element left
         int mid=(beg+end)/2;
         mergesort(A,beg,mid);
         mergesort(A,mid+1,end);
         merge(A,mid,beg,end);
     }
}

int merge(int A[],int mid,int beg,int end){
    int n1=mid-beg+1;
    int n2=end-mid;
    //int a[7];
    int left[n1],right[n2];
 // int a[7];
    for(int i=0;i<n1;i++){
        left[i]=A[beg+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=A[mid+1+j];
    }
    
    int i=0;
    int j=0;
    int k=beg;
    while(i<n1 && j<n2){
          if(left[i]<=right[j]){
              A[k]=left[i];
              i++;
              //k++;
          }
          else{
              A[k]=right[j];
              j++;
              //k++;
          }
          k++;
}
      while(i<n1){                           //for extra elements left
          A[k]=left[i];
          k++;
          i++;
      }
      while(j<n2){
          A[k]=right[j];
          k++;
          j++;
      }
     // print(a);
    }
        
    void print(int A[]){
        for(int i=0;i<7;i++){
            cout<<A[i]<<" ";
        }
    }
   