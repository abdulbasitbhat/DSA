#include<iostream>
using namespace std;

int create(int a[],int n){                 //O(n)
	int i;
	cout<<"Enter Elements"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
void traverse(int a[],int n){               //O(n)
	int i;
	cout<<"Traverse"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void bubble_sort(int a[],int n){
	int i,j;
	for(i=0;i<(n-1);i++){
		for(j=0;j<n-1-i;j++){
		if(a[j]>a[j+1]){
			int temp;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
}
void insert(int a[],int n){
	int pos,el,i;
	cout<<"Enter the pos of insert"<<endl;
	cin>>pos;                 //  pos=index+1    index=pos-1
	cout<<"Enter the element"<<endl;
	cin>>el;
	if(pos==1){                       //O(n)
		n++;
		for(i=n-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=el;
	}
	else if(pos==n+1){                //O(1)
		n++;
		a[pos-1]=el;
	}
	else if(pos>1 && pos<n+1){           
		n++;
		for(i=n-1;i>=pos;i--){
			a[i]=a[i-1];
		}
		a[pos-1]=el;
	}
	else
	{
		cout<<"Invalid Position"<<endl;
	}
}
void deletee(int a[],int n){
	int pos,i,j;
	cout<<"Enter pos of el to delete"<<endl;
	cin>>pos;
	if(pos==0){                           //O(n)
		
		for(i=0;i<n;i++){
			a[i]=a[i+1];
		}
		n--;
	}
	else if(pos==n-1){                    //O(1)
		n--;
	}
	else if(pos>0 && pos<n){              //O(n)
		for(i=pos-1;i<n;i++){
			a[i]=a[i+1];
		}
		n--;
	}
	else {
		cout<<"Invalid Position"<<endl;
	}
}

void search(int a[],int n){
	int el,flag=0;
	cout<<"Enter the element you want to search"<<endl;
	cin>>el;
	for(int i=0;i<n;i++){                                     //O(n)
		if(a[i]==el){
			cout<<"Found at "<<i+1<<" position"<<endl;
			flag=1;
		}
	}
	if(flag==0){
		cout<<"Not Found"<<endl;
	}
}


int main(){
	cout<<"No of elements"<<endl;
	int n,a[n],b[n],d;
	cin>>n;
	create(a,n);
	traverse(a,n);
	bubble_sort(a,n);
	traverse(a,n);
	insert(a,n);
	traverse(a,n+1);
	deletee(a,n+1);
	traverse(a,n);
	search(a,n);
}
