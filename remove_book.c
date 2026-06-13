#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"project2.h"
void remove_book(struct book **ptr)
{
	struct book *temp,*prev;
	int id,choice;
	char bookname[100],name[100];
	int found=0;
	printf("Remove by:");
	printf("1.Book Id\n");
	printf("2.Book Name\n");
	printf("enter choice");
	scanf("%d",&choice);
	temp=*ptr;
	prev=NULL;
	if(choice==1)
	{
	printf("Enter Book ID to Remove:");
	scanf("%d",&id);
	while(temp!=NULL)
	{
		if(temp->bookid==id)
		{
			if(prev==NULL)
			*ptr=temp->next;
			else
				prev->next=temp->next;

		free(temp);
		printf("Book Removed Successfully\n");
		found=1;
		break;
		}
	prev=temp;
	temp=temp->next;
	}
	}
	else if(choice==2)
        {
        printf("Enter Book Name to Remove:");
        scanf(" %[^\n]",name);
        while(temp!=NULL)
        {
                if(strcmp(temp->title,name)==0)
                {
                        if(prev==NULL)
                        *ptr=temp->next;
                        else
                                prev->next=temp->next;

                free(temp);
                printf("Book Removed Successfully\n");
                found=1;
                break;
                }
        prev=temp;
        temp=temp->next;
        }
        }
}

