//Deletion
#include<iostream>
#include<cstdlib>                                                    //for malloc
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

int main(){                                                        
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=4;
	fourth->next=NULL;
	
	struct Node *ptr;
	ptr=head;
	
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
//deletion at beginning----------------------------------------------------------------------------------------	
	struct Node *temp;
	temp=head;
	head=temp->next;
	delete temp;
	
	cout<<endl;                  //display
	ptr=head;
		while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
//deletion at position-------------------------------------------------------------------------------------	
	
	struct Node *temp2;
	temp2=head;
	temp=head;
	int pos=2;                                                       //remember ll is modified one
	int i=1;
	while(i!=pos-1){
		temp=temp->next;
		i++;
	}
	i=1;
	while(i!=pos){
		temp2=temp2->next;
		i++;
	}
	temp->next=temp2->next;
	delete temp2;
	
	cout<<endl;                    //display
	ptr=head;
		while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
//deletion at end-------------------------------------------------------------------------------------------	
	temp=head;
	temp2=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp->next=NULL;
	delete temp2;
	
	cout<<endl;                            //display
	ptr=head;
		while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
