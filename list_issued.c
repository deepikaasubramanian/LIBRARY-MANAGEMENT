#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"project2.h"
//struct issue*issuehead=NULL;

void list_issued(struct issue *iptr)
{ 
	//struct issue*issuehead;
	//struct issue*t=issuehead;
	if(iptr==NULL)
	{
		printf("No Books Are Issued \n");
		return;
	}
	//temp=head;
	printf("\n==============ISSUED BOOKS===========\n");
	printf("BookID\tUserID\tUserName\tIssueData\tDueData\tReturnDate\tFine Amount\n");
	while(iptr)
	{
		printf("%d\t%d\t\t%s\t%s\t%s\t%s\t%d\n",iptr->bookid,iptr->userid,iptr->username,iptr->issuedata,iptr->duedata,iptr->returndata,iptr->fine);
	iptr=iptr->next;
	}
}

