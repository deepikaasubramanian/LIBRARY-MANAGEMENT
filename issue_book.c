#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"project2.h"
 //struct issue*issuehead=NULL;

void issue_book(struct book *ptr,struct issue **iptr)
{
	int bid;
	time_t t;
	struct tm *info;
	printf("enter Book ID:");
	scanf("%d",&bid);
	while(ptr)
	{
		if(ptr->bookid==bid)
		{
			if(ptr->quantity<=0)
			{
				printf("Book Out Of Stock\n");
				return;
			}
			struct issue *temp;
			temp=malloc(sizeof(struct issue));
			printf("Enter User Id:\n");
			scanf("%d",&temp->userid);
			printf("Enter User name:\n");
			scanf("%s",temp->username);
			temp->bookid=bid;
			t=time(NULL);
			info=localtime(&t);
			strftime(temp->issuedata,sizeof(temp->issuedata),"%d-%m-%Y",info);
			t=t+(7*24*60*60);
			info=localtime(&t);
			strftime(temp->duedata,sizeof(temp->duedata),"%d-%m-%Y",info);
			strcpy(temp->returndata,"Not Returned");
			temp->fine=0;
		       temp->returned=0;
			ptr->quantity--;
			temp->next=*iptr;
			*iptr=temp;
	
			printf("\n==============================================\n");
			printf("\nBOOK issues successfully\n");
			/*printf("Book ID:%d",newissue->bookid);
			printf("Book Name:%s",newissue->title);*/
			printf("Issued Data:%s",temp->issuedata);
			printf("Due  Data:%s",temp->duedata);
			 printf("Available copies:%d\n",ptr->quantity);
			return;
		}
		ptr=ptr->next;
	}
	printf("Book Not Found\n");
}

