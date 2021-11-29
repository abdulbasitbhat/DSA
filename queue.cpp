#include<iostream>
using namespace std;
#define size 5

int qu[size];
int front=-1;
int rear=-1;
void enque(int );
void deque();
void display();

int main(){
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    enque(6);
    display();
    deque();
    enque(6);
    display();

}

void enque(int el){
    if(front==-1 && rear==-1){                //Cond for first entry
        front=0;
        rear=0;
        qu[rear]=el;
    }
    else if(rear==size-1){   //cond for full queue
        cout<<"Overflow"<<endl;
    } 
    else{                                                //normal cond
        rear++;
        qu[rear]=el;
    }

}

void deque(){
    if(front==-1 && rear==-1){                         //if empty
        cout<<"Underflow"<<endl;
    }
    else if(front==rear){                              //if only one element
        cout<<"Deleted "<<qu[front]<<endl;
        front=-1;
        rear=-1;
    }
    else{ 
        cout<<"Deleted "<<qu[front]<<endl;                 //normal delete
        front++;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"Empty"<<endl;
    }
    else if(front==0 && rear==0){
        cout<<"Only one element and that is: "<<qu[front];
    }
    else{
        cout<<"Queue is: "<<endl;
        for(int i=front;i<rear+1;i++){
           cout<<qu[i];
        }
        cout<<endl;

    }
}