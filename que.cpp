//QUEUE FOR CHARACTERS
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std; 

class Queue {
	
char *arr;
int front;
int rear;
int size;

public: Queue(int n){
 front=-1;
 rear=-1;
arr=new char[n];	
size=n;	
}

bool isEmpty()
{
	if (front==-1 && rear==-1){
		return true;
	}
	else 
	return false;
}

bool isFull(){
	if(rear==size-1){
		return true;
	}
	else 
	return false;
}

void enqueue(char c){
	if(isFull()){
		cout<<"queue is full\n";
	}
	else if(isEmpty()){
			rear=0;
			front=0;
			arr[rear]=c;
		}
	else
	{ rear++;  
	arr[rear]=c;
	}
}

void dequeue(){
	char x;
	if(isEmpty()){
		cout<<"queue is empty\n";
	}
	else if(front==rear){
		x=arr[front];
		arr[front]=NULL;
		cout<<"dequeued value:"<<x<<endl;
		front=-1;
		rear=-1;
	}
	else {
		x=arr[front];
		arr[front]=NULL;
		cout<<"dequeued value is:"<<x<<endl;
		front++;
	}	
}

void show(){
	if(isEmpty()){
		cout<<"queue is empty\n";
	}
   
   else{
		
   cout<<"queue is:\n";

		for(int j=0;j<size;j++){
			cout<<"| "<<arr[j]<<" ";
			//front++;
			}
		
		cout<<" |"<<endl;

	}
}
};

int main() {
	int size;
	char character[]="jacksparrow";
	size=strlen(character);
	cout<<"size of array is:"<<size<<endl;
	
	Queue q(size);
	
	for(int i=0;i<size;i++){
		
		q.enqueue(character[i]);
	}
cout<<q.isFull()<<endl;

q.show();
q.dequeue();
q.dequeue();
q.show();
		
	return 0;
}

*/

//QUEUE FOR INTEGERS
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std; 

class Queue{
	int front;
	int rear;
	int arr[5];
	
	public: Queue(){
		front=-1;
		rear=-1;
		
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}
	
	bool isEmpty(){
		if(front==-1 && rear==-1)
		   return true;
		else
		   return false;
				}
				
	bool isFull(){
		if(rear==4)
		  return true;
		else
		  return false;
	}
	
	void enqueue(int val){
		if(isFull()){
			cout<<"\nQueue is full\n";
			return;
		}
		
		else if(isEmpty()){
			rear=0;
			front=0;
			arr[rear]=val;
		}
		else
		  {
		  rear++;
		  arr[rear]=val;  }
	}
	
	int dequeue(){
		int x;
		if(isEmpty()){
			cout<<"\nqueue is empty\n";
			return 0;
		}
		
		else if(front==rear)  //means it has only one value
		{
			x=arr[front];
		    arr[front]=NULL;
			rear=-1;            //removing the only value will bring front and rear back to -1
			front=-1;
			return x;
		}
		else
		{
	    	x=arr[front];
		    arr[front]=NULL;
			front++;
			return x;
		}
		}
	
	int count(){
		return (rear-front+1);
	}
	
	void display(){
		cout<<"\nAll values in queue are:\n";
		for(int i=0;i<5;i++){
			cout<<"| "<<arr[i];
		}
		cout<<" |"<<endl;
	}	
};

int main(){
	Queue q;
	q.enqueue(7);
	q.enqueue(9);
	q.enqueue(2);
	q.enqueue(6);
	q.enqueue(8);
	cout<<"\nnumber of elements in queue:"<<q.count()<<endl;;
	q.display();
	cout<<"\nthe dequeued value is:"<<q.dequeue()<<endl;
	q.display();		
}
*/
/*
//CIRCULAR QUEUE
#include<iostream>
#include<bits/stdc++.h>
#define n 5

using namespace std;

class Queue{
	
	int arr[n];
	int front,rear;
	
	public:
		Queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<n;i++){
				arr[i]=0;
			}
		}
		
	bool isEmpty(){
			if(front==-1 && rear==-1)
			return true;
			else 
			return false;
		}
		
	bool isFull()
		{
			if((rear+1)%n==front){
				return true;
			}
			else 
			return false;
		}
		
	void enqueue(int x){
			if(isEmpty()){
				front=0;
				rear=0;
				arr[rear]=x;
			}
			else if(isFull()){
				cout<<"\nqueue is full\n";
			}
			else
			{
				rear=(rear+1)%n;
				arr[rear]=x;
			}
		}
		
	void dequeue(){
			int x;
			if(isEmpty()){
				cout<<"\nqueue is already empty\n";
			}
			
			else if(front==rear){           //there is only one element in queue
				x=arr[front];
				arr[front]=0;
				front=-1;
				rear=-1;
				cout<<"\nThe dequeued element is:"<<x<<endl;
			}
			
			else{
				x=arr[front];
				arr[front]=0;
				front=(front+1)%n;
				cout<<"\ndequeued element:"<<x<<endl;
			}
		}
		
		void show(){
		    cout<<"\nElements of queue are:\n";
			for(int i=0;i<n;i++){
				cout<<"| "<<arr[i];
			}
			cout<<"|"<<endl<<endl;
		}		
};

int main(){
	Queue q;
	q.show();
	q.enqueue(6);
	q.enqueue(8);
	q.enqueue(2);
	q.enqueue(5);
	q.enqueue(3);
	q.show();
	q.dequeue();
	q.show();
	q.dequeue();
	q.show();
	q.enqueue(7);
	q.show();
	q.enqueue(1);
	q.show();
}
*/




