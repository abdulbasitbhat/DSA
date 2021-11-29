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
	
}
