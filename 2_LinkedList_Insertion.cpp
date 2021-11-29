#include<iostream>
#include<cstdlib>                 //Library for malloc
using namespace std;

struct Node{                      //Creatng a UDT
	int data;
	struct Node *next;
};

int main(){
	//Creation
	struct Node *head;
	struct Node *second;
	struct Node *third;
	//Memory allocation
	head=(struct Node *)malloc(sizeof(struct Node));           //head is not a node , its pointer to node
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	//Traverse
	struct Node *ptr;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	//Insertion
	//At beginning
	int b=7;
	int e=8,posDat=9,pos=2,apos=10;
	
	struct Node *ptr_2;
	ptr_2=(struct Node *)malloc(sizeof(struct Node));
	
	ptr_2->data=b;
	ptr_2->next=NULL;
	
	ptr_2->next=head;
	head=ptr_2;
	
/*	//In between
	//Reusing ptr
	ptr_2->data=posDat;
	ptr_2->next=NULL;
	
	struct Node *p;
	p=(struct Node *)malloc(sizeof(struct Node));
	
	p=head;
	int q=1;
	while(q!=pos){
		p=p->next;
		q++;
	}
	ptr_2->next=p->next;
	p->next=ptr;
	
	//At end;
	ptr_2->data=e;
	ptr_2->next=NULL;
	p=head;
	while(p!=NULL){
		p=p->next;
	}
	p->next=ptr;
	
	//at given pos...*/
	
	ptr=head;
	cout<<endl;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	
}
