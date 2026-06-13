#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"project2.h"
void update(struct book **ptr)
{
	struct book *temp;
	int choice,updatechoice;
	char authorname[100],bookname[100];
	int id,found=0;
	printf("---UPDATE BY---\n");
	printf("1.Book Id\n");
	printf("2.Book name\n");
	printf("3.Author name\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	temp=*ptr;
	if(choice==1)
	{
	printf("\nEnter Book ID to update:");
	scanf(" %d",&id);
	while(temp!=NULL)
	{
		if(temp->bookid==id)
		{
			printf("==========BOOK FOUND=========\n");
			printf("what do u want to update\n");
			printf("1.Book title\n");
			printf("2.Author Name\n");
			printf("3.Quantity\n");
			printf("enter the choice\n");
			scanf("%d",&updatechoice);
			if(updatechoice==1)
			{
			printf("Enter New Title:");
			scanf(" %[^\n]",temp->title);
			}
			else if(updatechoice==2)
			{
			printf("Enter New Author:");
			scanf(" %[^\n]",temp->author);
			}
			else if(updatechoice==3)
			{
			printf("Enter new quantity:");
			scanf(" %d",&temp->quantity);
			}
			found=1;
			printf("==============Book Updated Successfully========\n");
			break;
		}
		temp=temp->next;
	}
	}
	else if(choice==2)
	{
		printf("enter the book name\n");
		scanf(" %[^\n]",bookname);
		while(temp!=NULL)
        {
                if(strcmp(temp->title,bookname)==0)
                {
			printf("Book Found\n");
                       printf("what do u want to update\n");
                        printf("1.Author Name\n");
                        printf("2.Quantity\n");
                        printf("enter the choice\n");
                        scanf("%d",&updatechoice);
                        if(updatechoice==1)
                        {
                        printf("Enter New Author:");
                        scanf(" %[^\n]",temp->author);
                        }
                        else if(updatechoice==2)
                        {
                        printf("Enter new quantity:");
                        scanf(" %d",&temp->quantity);
                        }
                        found=1;
                        printf("Book Updated Successfully\n");
                        break;
                }
                temp=temp->next;
        }
        }
	 else if(choice==3)
        {
                printf("Enter Author  Name\n");
                scanf(" %[^\n]",authorname);
                while(temp!=NULL)
        {
                if(strcmp(temp->author,authorname)==0)
                {
                        printf("Book Found\n");
                       printf("what do u want to update\n");
                        printf("1.Book Name\n");
                        printf("2.Quantity\n");
                        printf("enter the choice\n");
                        scanf("%d",&updatechoice);
                        if(updatechoice==1)
                        {
                        printf("Enter New Book Name:");
                        scanf(" %[^\n]",temp->title);
                        }
                        else if(updatechoice==2)
                        {
                        printf("Enter new quantity:");
                        scanf("%d",&temp->quantity);
                        }
                        found=1;
                        printf("Book Updated Successfully\n");
                        break;
                }
                temp=temp->next;
	}
}
	else
		printf("Invalid choice\n");
	if(found==0)

		printf("Book Not Found\n");



}

