/*
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Node
{
	public: 
	  int data;
	  Node *next;
};

void display(Node* h)
{
	h=h->next;
	while(h!=NULL)
	{    
		cout<<h->data<<"   ";          //data of h
		h=h->next;                    //address of next node is stored in h
	}
}

void InsertFirst(Node* head,int d){
	Node* newNode=new Node();
	newNode->data=d;
	newNode->next=head->next;
	head->next=newNode;
}

void InsertInBw(Node* head,int index,int d)
{
	Node* newNode=new Node();
	Node *ptr=head;
	
	for(int i=0;i<index-1;i++){
		ptr=ptr->next;
	}
	
	newNode->data=d;
	newNode->next=ptr->next;          //address of node next to n node is stored in newnode
	ptr->next=newNode;                //n node stores address of newnode
}

void InsertLast(Node* head,int d){
		Node* ptr=head;
		Node* newNode=new Node();
				
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	newNode->data=d;
	ptr->next=newNode;
	newNode->next=NULL;
}

void deleteFirst(Node* head)
{   
    Node* ptr;
	ptr=head->next;
	head->next=ptr->next;
	delete ptr;	
}

void deleteAtIndex(Node* head,int n)
{
	Node* ptr=head;              //address of node to be deleted
	Node* q=head->next;	      //address of the next node 
	for(int i=0;i<n-1;i++)
	{
		ptr=ptr->next;
		q=q->next;
	}
	ptr->next=q->next;
	delete q;
}

int main()
{
	Node* head=new Node();
	Node* first=new Node();
	Node* second=new Node();
	Node* third=new Node();
	
	head->data=NULL;
	head->next=first;
	
	first->data=1;
	first->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	display(head);
	cout<<endl<<endl;

	InsertFirst(head,4);
	InsertLast(head,100);
	display(head);
	cout<<endl<<endl;
	
	
   deleteFirst(head);
   display(head);
    cout<<"\nafter \n";
    deleteAtIndex(head,3);
     
	display(head);
	InsertInBw(head,2,76);
	cout<<endl<<endl;
	display(head);	
}
*/



