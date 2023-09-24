
#include <iostream>
#include<string>
using namespace std;

class Stack{
	int top;
	int arr[5];
	
	public: Stack(){
		top=-1;
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}
	
	bool isEmpty(){
		if(top==-1)
		  return true;
		else
		return false;
	}
	
	bool isFull(){
		if(top==4)
		  return true;
		else 
		return false;
	}
	
	void push(int val){
		if(isFull()){
			cout<<"\nstack overflow\n";
		}
		else
		{	top++;      //cuz top was -1
			arr[top]=val;
		}
	}
	
	int pop(){
		if(isEmpty()){
			cout<<"\nstack underflow\n";
			return 0;
		}
		else
		{
		    int popvalue=arr[top];
			arr[top]=0;
			top--;
			return popvalue; 
		}
	}
	
	int count(){
		return (top+1);
	}
	
	int peek(int index){
		if(isEmpty()){
		cout<<"\nstack underflow\n";
			return 0;	
		}
		else
		return arr[index];
	}
	
	void change(int index, int value){
		arr[index]=value;
		cout<<"\n\nitem changed at location:"<<index<<" by "<<value<<endl;
	}
	
	void display(){
		cout<<"\n\nAll values in Stack are:\n\n   _________\n";
		
		for(int i=4;i>=0;i--){
			cout<<"   |  "<<arr[i]<<"    |\n";
		}
		cout<<"   _________\n";
	}
};

int main() {
	
	Stack s1;
	
	s1.display();
	cout<<"is stack empty:"<<s1.isEmpty()<<endl;
	s1.push(5);
	s1.push(2);
	s1.push(7);
	s1.push(9);
	s1.push(6);
    cout<<"number of elements in stack:"<<s1.count()<<endl;
	
	cout<<"is stack full:"<<s1.isFull()<<endl;
	s1.display();
	
	cout<<"\nvalue popped is:"<<s1.pop()<<endl;
	cout<<"is stack full:"<<s1.isFull()<<endl;
	cout<<"number of elements in stack:"<<s1.count()<<endl;
	cout<<"value at index 2:"<<s1.peek(2)<<endl;
	s1.display();
	s1.change(2,3);
	s1.display();
		
	return 0;
}
