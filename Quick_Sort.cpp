#include<iostream>
using namespace std;

void quicksort(int *,int,int);
int partition(int*,int ,int);

int main(){
    int A[7]={10,20,80,90,40,50,70};
    int p=0;
    int r=7-1;
    quicksort(A,p,r);
for(int h=0;h<7;h++){
    cout<<A[h]<<"  ";
}
cout<<endl;

}

void quicksort(int A[],int p,int r){
   if(p<r){
       int q=partition(A,p,r);
       quicksort(A,p,q-1);
       quicksort(A,q+1,r);
   }
}

int partition(int A[],int p,int r){
    int pivot=A[r];
    int i=p-1;  //this is why i was stuck
    for(int j=p;j<=(r-1);j++){
        if(A[j]<=pivot){
            i=i+1;
            int temp;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    int temp2;
    temp2=A[i+1];
    A[i+1]=A[r];
    A[r]=temp2;
    return i+1;
}