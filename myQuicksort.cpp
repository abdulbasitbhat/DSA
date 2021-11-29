#include<iostream>
using namespace std;
#define size 6   //taken 1 less
int partition(int arr[],int,int);
void swap(int*,int*);
void quicksort(int arr[],int,int);

int main(){
int arr[7]={10,20,80,90,40,50,70};
                                             //Pivot is last element

int pivot;
int p;                                        //pivot index
//cout<<"Hi"<<endl;
quicksort(arr,0,6);
//cout<<"Hello"<<endl;
//partition(arr,70,6);
for(int i=0;i<7;i++){
cout<<arr[i]<<"  ";
}
cout<<endl;
//pivot on place
/*int np=0;
    int i=0;
    while(arr[i]!=70){
    np++;
    i++;
}
cout<<np<<endl;*/
   
//quicksort(arr,0,np-1);
//quicksort(arr,np,7);
partition(arr,0,6);
for(int i=0;i<7;i++){
cout<<arr[i]<<"  ";
}

}

void quicksort(int arr[],int from,int to){   //a[to] will be new pivot
int q;
int p=from;
if(p<q){                        //base cond of recursion
q=partition(arr,from,to);
quicksort(arr,p,q-1);
quicksort(arr,q+1,to);
}
}

int partition(int arr[],int p,int q){
int i=p-1;  //where i was stuck........ i is a func of p, we cant keep i=-1 for all partitions
int j=0;
i++;
//j++;
for(j=p;j<=q;j++){
if(arr[j]<=arr[q-1]){
swap(&arr[j],&arr[i]);
i++;
//cout<<i<<endl;
}
else{

}
}
return i;
}
//first partition working.

void swap(int *i,int *p){
int temp;
temp=*i;
*i=*p;
*p=temp;
}
