//Palindrome Check
#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	char data;
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
	
	head->data='a';
	head->next=second;
	head->prev=NULL;
	
		second->data='b';
	second->next=third;
	second->prev=head;
	
		third->data='c';
	third->next=fourth;
	third->prev=second;
	
		fourth->data='b';
	fourth->next=fifth;
	fourth->prev=third;
	
		fifth->data='d';
	fifth->next=NULL;
	fifth->prev=fourth;
	
	struct node *tail;
	tail=fifth;
	//Display	
	cout<<"Doubly LL"<<endl;
	struct node *ptr;
	ptr=head;
	while(ptr!=tail){
		cout<<ptr->data;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	cout<<endl;
	
	int count=0;
	ptr=head;
	struct node *temp;
	temp=tail;
	while(ptr!=temp ){
		if(ptr->data==temp->data){
			ptr=ptr->next;
			temp=temp->prev;
			//cout<<"Hi";
		}
		else{
			count=count+1;
			break;
		}
		
	}
	if(count==0){
		cout<<"Palindrome"<<endl;
	}
	else
	{
		cout<<"Not Palindrome"<<endl;
	}
}
