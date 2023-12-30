#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

struct node{
	int move;
	node *next;
};

node *you=NULL;

node *comp=NULL;

node *createnode()
{
	node *n = new node;
	return n;
}

void insert(int i,int move)
{
	node *t;
	t=createnode();
	t->move=move;
	t->next=NULL;
	
	if(i==1)
	{
		if(you==NULL)
			you=t;
		else
		{
			node *temp;
			temp=you;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=t;
		}
	}
	else
	{
		if(comp==NULL)
			comp=t;
		else
		{
			node *temp;
			temp=comp;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=t;
		}
	}
	
	
}
#endif