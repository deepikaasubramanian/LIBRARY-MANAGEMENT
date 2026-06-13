#include<stdio.h>
#include<stdlib.h>
#include"project2.h"
void search_book(struct book *ptr)
{
	struct book*temp;
	int choice,id,found=0;
	char name[100];
	char author[100];
	printf("----Search Book By--:");
	printf("1.Book ID\n");
	printf("2.Book name\n");
	printf("3.Author Name\n");
	printf("Enter Choice");
	scanf("%d",&choice);
	temp=ptr;
	if(choice==1)
	{
		printf("Enter Book id");
		scanf(" %d",&id);
		while(temp!=NULL)
		{
			if(temp->bookid==id)
			{
				printf("========Book Found=====\n");
				printf("Book Id:%d\n",temp->bookid);
				printf("Title:%s\n",temp->title);
				printf("author:%s\n",temp->author);
				printf("quantity:%d\n",temp->quantity);
				found=1;
				break;
			}
			temp=temp->next;
		}
	}
	else if(choice==2)
        {
                printf("Enter Book Name");
                scanf(" %[^\n]",name);
                while(temp!=NULL)
                {
                        if(strcmp(temp->title,name)==0)
                        {
                                printf("=======Book Found=======\n");
                                printf("Book Id:%d\n",temp->bookid);
                                printf("Title:%s\n",temp->title);
                                printf("author:%s\n",temp->author);
                                printf("quantity:%d\n",temp->quantity);
                                found=1;
                                break;
                        }
                        temp=temp->next;
                }
        }
	  else if(choice==3)
        {
                printf("Enter Author  Name");
                scanf(" %[^\n]",author);
                while(temp!=NULL)
                {
                        if(strcmp(temp->author,author)==0)
                        {
                                printf("=======Book Found======\n");
                                printf("Book Id:%d\n",temp->bookid);
                                printf("Title:%s\n",temp->title);
                                printf("author:%s\n",temp->author);
                                printf("quantity:%d\n",temp->quantity);
                                found=1;
                                break;
                        }
                        temp=temp->next;
                }
        }
	else
		printf("Invalid choice\n");
	if(found==0)
		printf("==========Book Not Found========\n");
}





