#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(){
	int i=0;
//---------------------------------------------------------------------------------------------------------------------	
	//Circular ll creation
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
	
		second->data=2;
	second->next=third;
	
		third->data=3;
	third->next=fourth;
	
		fourth->data=4;
	fourth->next=fifth;
	
		fifth->data=5;
	fifth->next=head;
	//Display	
	cout<<"Circular LL"<<endl;
	struct node *ptr;
	ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	
//-----------------------------------------------------------------------------------------------------------------------------------	
	//insertion at end;
	struct node *tail;
	tail=fifth;
	struct node *newnod;
	newnod=(struct node *)malloc(sizeof(struct node));
	newnod->data=10;
	newnod->next=NULL;
newnod->next=tail->next;
tail->next=newnod;

cout<<endl;
	//Display
	cout<<"Isertion at end"<<endl;
	ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
//-------------------------------------------------------------------------------------------------------------------------------
//at any pos
	struct node *newnod2;
	newnod2=(struct node *)malloc(sizeof(struct node));
	newnod2->data=20;
	newnod2->next=NULL;
int pos=2;  //insert after second node
ptr=head;
      while(i<(pos-1)){
      	ptr=ptr->next;
      	i++;
	  }
	  //cout<<ptr->data;
	  
	  newnod2->next=ptr->next;
	  ptr->next=newnod2;
	  	//Display
		  cout<<endl;
	  	cout<<"Insertion after 2nd element"<<endl;
	  	
	ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
//------------------------------------------------------------------------------------------------------------------	
	//Isertion at first
	struct node *newnod3;
	newnod3=(struct node *)malloc(sizeof(struct node));
	newnod3->data=30;
	newnod3->next=NULL;	
	
	tail->next=newnod3;
	newnod3->next=head;
	head=newnod3;
	
	  	//Display
		  cout<<endl;
	  	cout<<"Insertion at beginning"<<endl;
	  	
	ptr=head;
	while(ptr->next!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	cout<<ptr->next->data<<endl;
//---------------------------------------------------------------------------------------------------------------------	
	//Deletion
	
	//first node
	struct node *temp;
	temp=tail->next;
	tail->next=temp->next;
	temp->next=NULL;
	//free(temp);
	delete(temp);
	head=tail->next;
		  cout<<endl;
	  	cout<<"deletion of first node"<<endl;
	  	
	ptr=tail->next;
	while(ptr->next!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
//	cout<<ptr->next->data<<endl;
cout<<"done"<<endl;


//-------------------------------------------------------------------------------------------------------
	//deletion at pos
	pos=2;
	i=0;
	struct node *ptr2;
	ptr2=tail->next;
	ptr=tail->next;
	while(i<(pos)){
		ptr=ptr->next;
		ptr2=ptr->next;
	}
	ptr->next=ptr2->next;
	delete(ptr2);
	
		  cout<<endl;
	  	cout<<"deletion of node at a pos"<<endl;
	
	  	
	ptr=tail->next;
	while(ptr->next!=tail){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	
}
//-------------------------------------------------------------------------------------------------------

