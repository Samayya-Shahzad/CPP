
//DOUBLY LINKED LIST 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Node
{
	public:
	Node *prev;
	int data;
	Node *next;
};

void AddStart(Node *head,int d)
{
	Node *newNode=new Node();
	  
	  newNode->data=d;
	newNode->next=head->next;
	head->next=newNode;
	newNode->prev=head;
	  
}

void AddIndex(Node *head,int data,int index)
{
	Node *newNode=new Node();
	Node *ptr=head;
		
		for(int i =0;i<index-1;i++)
	{
		ptr=ptr->next;
	}
	  newNode->data=data;
	  newNode->next=ptr->next;
	  ptr->next=newNode;
	  newNode->prev=ptr;

}

void AddEnd(Node *head,int data)
{
	Node *newNode=new Node();
	Node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	newNode->data=data;
	newNode->prev=ptr;
	newNode->next=NULL;
	ptr->next=newNode;	
}

void DeleteFirstNode(Node *head)
{
	Node *ptr=head->next;
	head->next=ptr->next;
	ptr->next->prev=head;
	delete ptr;
}

void DeleteAtIndex(Node *head,int index)
{
	Node *ptr=head;
	Node* q=head->next;
	
	for(int i=0;i<index-1;i++)
	{
		ptr=ptr->next;
		q=q->next;
	}	
	
ptr->next=q->next;
q->next->prev=ptr;

	delete q;
}

void DeleteLastNode(Node *head)
{
	Node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	
	 ptr->prev->next=NULL;
	 delete ptr;	
}


void Display(Node *head){
  
  Node* ptr=head->next;

while(ptr!=NULL)
{
	 cout<<ptr->data<<"\t";
	 ptr=ptr->next;
}
	}
	
	int main()
{
	Node* head=new Node();
	Node* first=new Node();
	Node* sec=new Node();
	Node* third=new Node();
	Node* fourth=new Node();
	Node* fifth=new Node();
	head->prev=NULL;
	head->data=NULL;
	head->next=first;
	
	first->prev=head;
	first->data=10;
	first->next=sec;
	
	sec->prev=first;
	sec->data= 11;
	sec->next=third;
	
	third->prev=sec;
	third->data =12;
	third->next=fourth;
	
	fourth->prev=third;
	fourth->data=13;
	fourth->next=fifth;
	
	fifth->prev=fourth;
	fifth->data=14;
	fifth->next=NULL;
	
	Display(head);
	
	AddStart(head,9);
	cout<<"\n\n";
	Display(head);
	
	AddIndex(head,22,3);
	cout<<"\n\n";
	Display(head);
	cout<<endl<<endl;
	
	AddEnd(head,82);
	Display(head);
	cout<<endl<<endl;
	
	DeleteLastNode(head);
	Display(head);
	
	DeleteAtIndex(head,4);
	cout<<"\n\n";
	Display(head);
}

