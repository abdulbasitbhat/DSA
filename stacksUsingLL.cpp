#include<iostream>
#include<cstdlib>
using namespace std;

void push(int);
void pop();
void display();
void init();
struct node{
    int data;
    struct node *next;
};

struct node *top;

int main(){
   
top=(struct node *)malloc(sizeof(struct node));
top->next=NULL;

   //init();
   push(10);
  // cout<<"HI"<<endl;
   push(100);
   push(1000);
   push(10000);
   push(100000);
   push(30);
   pop();
   display();
}

void init(){
   // struct node *top;
    top->next=NULL;
}

void push(int item){
   struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node));

newnode->data=item;
if(top==NULL){
    newnode->next=NULL;
}
else{
    newnode->next=top;
    top=newnode;
}
}

void pop(){
    if(top==NULL){
        cout<<"Uderflow"<<endl;
    }
    else{
        struct node *temp;
        temp=top;
        top=top->next;
        delete(temp);
    }
}

void display(){
    if(top==NULL){
        cout<<"STACK is EMPTY"<<endl;
    }
    else{
        struct node *temp;
        temp=top;
        while(temp->next!=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }
}