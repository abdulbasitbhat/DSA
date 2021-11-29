//Stacks

#include<iostream>
using namespace std;
#define N 5 

int* push(int n,int stack[],int top);
void display(int stack[],int top);

int main(){
	
    int stack[N];
	int top=-1;
	top++;
	stack[top]=3;
	push(1,stack,top);
	//push(9);
	top++;
	display(stack,top);
}

int* push(int n,int stack[],int top){
	top++;
	stack[top]=n;
	return stack;
}

void display(int stack[],int top){
	int i=0;
	for(i=top;i>=0;i--){
		cout<<stack[top]<<endl;
	}
}
