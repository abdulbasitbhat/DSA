#include<iostream>
using namespace std;
#define SIZE 5

int stack[SIZE],top=-1;

void push(int);
void pop();
void display();
int main()
{
   push(10);
   push(100);
   push(1000);
   push(10000);
   push(100000);
   push(30);
   pop();
   display();
}

void push(int item){
     if(top==SIZE-1){
         cout<<"Overflow"<<endl;
     }
     else{
         top++;
         stack[top]=item;
         cout<<"Element "<<item<<" added to stack"<<endl;
     }
}

void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        top--;
    }
}

void display(){
    if(top==-1){
        cout<<"STACK is EMPTY"<<endl;
    }
    else{
        int i;
        for(i=top;i>=0;i--){
           cout<<stack[i]<<"  ";
        }
        cout<<endl;
    }
}