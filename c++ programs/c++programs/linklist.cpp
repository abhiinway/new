#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	struct node *next;

};
struct node *head ,*temp,*newnode;
void insert(){
	newnode =(struct node *)malloc(sizeof (struct node));
	cout<<"\nenter the data\n"<<endl;
	cin>>newnode->data;
	newnode->next=0;
	newnode->next=head;
	head=newnode;
}
void endinsert(){
	newnode =(struct node *)malloc(sizeof (struct node));
	cout<<"\nenter the data\n"<<endl;
	cin>>newnode->data;
	newnode->next=0;
	temp=head;
	while(temp->next!=0)
	{
	temp=temp->next;
	}
	temp->next=newnode;
}

int main()
{
	int count =0,i=1,pos;
	int ch;
head=0;
	while (ch)
	{
		newnode =(struct node *)malloc(sizeof (struct node));
		cout<<("\nenter the data \n");
		cin>>newnode->data;
		newnode->next=0;
		
		if(head==0)
		head=temp=newnode;
	else{
		temp->next=newnode;
		temp=newnode;
	}
	
	cout<<"Press  1 for continue\n press 0 for exit\n";
	cin>>ch;
	}
	temp=head;
	while(temp)
	{int count =0;
		cout<<temp->data;
		count++;
		temp=temp->next;
	}
	insert();
	temp=head;
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	endinsert();
	temp=head;
	while(temp)
	{
		cout<<temp->data;
		count++;
		temp=temp->next;
		
	}
	cout<<"size of link list is = "<<count;
	int m;

	return 0;
	
}