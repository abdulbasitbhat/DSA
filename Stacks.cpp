#include<iostream>
using namespace std;
#define SIZE 10

void push(int);
//void pop();
void display();

int stack[SIZE], top=-1;

void main(){
   int value;
   //PUSH
   value=10;
   push(value);	
   push(20);
   push(30);
   display();
	
}

void push(int value){
	if(top==SIZE-1){
		cout<<"OVERFLOW"<<endl;
	}
	else{
		top++;
		stack[top]=value;
		cout<<"DONE"<<endl;
	}
}
void display(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		int i;
		cout<<"Eements are"<<endl;
		for(i=top;i>=0;i--)
		cout<<stack[i]<<endl;
	}
}
