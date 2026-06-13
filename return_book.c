#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"project2.h"
//extern struct issue*issuehead=NULL;

void return_book(struct book*ptr,struct issue *iptr)
{
	int uid;
	int bid;
	printf("Enter Book ID:");
	scanf(" %d",&bid);
	printf("enter user id");
	scanf(" %d",&uid);
	while(iptr)
	{
		if(iptr->bookid == bid && iptr->userid && iptr->returned== 0)
		{
			time_t t=time(NULL);
			struct tm*info=localtime(&t);
			strftime(iptr->returndata,sizeof(iptr->returndata),"%d-%m-%Y",info);
			iptr->returned=1;
			int d,m,y;
			sscanf(iptr->duedata,"%d-%d-%d",&d,&m,&y);
			struct tm due={0};
			due.tm_mday=d;
			due.tm_mon=m-1;
			due.tm_year=y-1900;
			time_t due_tm=mktime(&due);
			//int late=difftime(t,due_tm)/(24*60*60);
				iptr->fine=0;
			double days=difftime(t,due_tm)/(24*60*60);
			/*if(days<=7)
				iptr->fine=0;
			else
				iptr->fine=(int)(days-7)*20;*/
			struct book*temp=ptr;
			while(temp)
			{
				if(temp->bookid == bid)
				{
					temp->quantity++;
					break;
				}
				temp=temp->next;
			}
			printf("===========BOOK RETURNED SUCCESSFULLU============\n");
			printf("Return Dte:\t%s\n",iptr->returndata);
		//	printf("Fine Amount :\t Rs:%.d\n",iptr->fine);
			printf("Fine Amount : Rs:0\n");
			printf("Available Copies\t:%d\n",temp->quantity);
			return;
		}
		iptr=iptr->next;
	}
	printf("=======================RECORD NOT FOUND==================\n");
}

