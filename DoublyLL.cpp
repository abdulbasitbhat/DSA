#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

int main(){
	int i=0;
//---------------------------------------------------------------------------------------------------------------------	
	//Doubly ll creation
	struct node *head;
	head=(struct node *)malloc(sizeof(struct node));
		struct node *second;
	second=(struct node *)malloc(sizeof(struct node));
		struct node *third;
	third=(struct node *)malloc(sizeof(struct node));
		struct node *fourth;
	fourth=(struct node *)malloc(sizeof(struct node));
		struct node *fifth;
	fifth=(struct node *)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	head->prev=NULL;
	
		second->data=2;
	second->next=third;
	second->prev=head;
	
		third->data=3;
	third->next=fourth;
	third->prev=second;
	
		fourth->data=4;
	fourth->next=fifth;
	fourth->prev=third;
	
		fifth->data=5;
	fifth->next=NULL;
	fifth->prev=fourth;
	
	struct node *tail;
	tail=fifth;
	//Display	
	cout<<"Doubly LL"<<endl;
	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	
	//--------------------------------------------
	//Insertion

	//Insertion at beg
	
	struct node *newnod;
	newnod=(struct node *)malloc(sizeof(struct node));
	
	newnod->data=9;
	newnod->next=NULL;
	newnod->prev=NULL;
	
	newnod->next=head;
	head->prev=newnod;
	head=newnod;
	//head=newnod;
	
		//Display
		cout<<endl;
			
	cout<<"Doubly LL after insertion at beg"<<endl;
//	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl; 
	
	//------------------------------------------------------
	//Insertion at end
	
	struct node *newnod2;
	newnod2=(struct node *)malloc(sizeof(struct node));
	
	newnod2->data=8;
	newnod2->next=NULL;
	newnod2->prev=NULL;
	
    tail->next=newnod2;
    newnod2->prev=tail;
    tail=newnod2;
	
		//Display
		cout<<endl;
			
	cout<<"Doubly LL after insertion at end"<<endl;
//	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl; 
	
//----------------------------------------------------
	//Insertion at any pos
	struct node *newnod3;
	struct node *temp;
	newnod3=(struct node *)malloc(sizeof(struct node));
	
	newnod3->data=66;
	newnod3->next=NULL;
	newnod3->prev=NULL;

    int pos=2;
    i=0;
    ptr=head;
    temp=head;
    
    while(i<pos){
    	ptr=ptr->next;
    	temp=ptr->next;
    	i++;
	}
	ptr->next=newnod3;
	newnod3->next=temp;
	temp->prev=newnod3;

		//Display
	cout<<endl;	
	cout<<"Doubly LL after insertion after sec node"<<endl;
//	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl; 
	
	
//----------------------------------------------------------------------------------------------------------------------------	
	//Deletion
	//Deletion at beginning
	temp=head;
	head=head->next;
	head->prev=NULL;
	delete(temp);
	
			//Display
	cout<<endl;	
	cout<<"Doubly LL after deletion of first node"<<endl;
//	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl; 
	
	//-------------------------------------------------------------------------
	//Deletion at end
//	struct node *temp;
	temp=tail;
	tail=tail->prev;
	tail->next=NULL;
	delete(temp);
	
				//Display
	cout<<endl;	
	cout<<"Doubly LL after deletion of last node"<<endl;
//	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl; 
	
	//--------------------------------------------------------------------------
	//Deletion after a pos
	pos=2;
	i=1;
    ptr=head;
    temp=head;
    
    while(i<pos){
    	ptr=ptr->next;
    	temp=ptr->next;
    	i++;
	}
	ptr->next=temp->next;
	temp->next->prev=ptr;
	delete(temp);
	
	//Display
	cout<<endl;	
	cout<<"Doubly LL after deletion of 3rd node"<<endl;
//	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl; 
//--------------------------------------------------------------	
}
	
