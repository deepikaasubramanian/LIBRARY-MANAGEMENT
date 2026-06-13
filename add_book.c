#include<stdio.h>
#include<stdlib.h>
#include"project2.h"
void add_book(struct book** ptr)
{
	struct book *newnode,*temp;
	static int id=1;
	newnode=(struct book*)malloc(sizeof(struct book));
	newnode->bookid=id++;
	printf("%d",newnode->bookid);
	printf("Emter Book Title\n");
	scanf(" %[^\n]",newnode->title);
	printf("Enter Author name\n");
	scanf(" %[^\n]",newnode->author);
	printf("Enter Quantity\n");
	scanf(" %d",&newnode->quantity);
	newnode->next=0;
	if(*ptr==NULL)
	{
		*ptr=newnode;
	}
	else
	{
		temp=*ptr;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	printf("Book Added Successufully\n");
}


