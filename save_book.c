#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"project2.h"
void save_book(struct book  *ptr)
{
	FILE *fp;
	struct book*temp;
	fp=fopen("book.txt","w");
	if(fp==NULL)
	{
		printf("File Cannit Be Opened\n");
		return;
	}
	temp=ptr;
	while(temp!=NULL)
	{
		fprintf(fp,"BOOK ID:%d\n",temp->bookid);
		fprintf(fp,"BOOK TITLE:%s\n",temp->title);
		fprintf(fp,"AUTHOR NAME:%s\n",temp->author);
		fprintf(fp,"QUANTITY:%d\n",temp->quantity);
		temp=temp->next;
	}
	fclose(fp);
	printf("Book Saved Successfully\n");
}



