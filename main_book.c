#include<stdio.h>
#include<stdlib.h>
#include"project2.h"

int main()
{
	struct issue*iptr=NULL;
	struct book* hptr=0;
	int ch;
	while(1)
	{
		printf("\n-----------------------------------------\n");
		printf("\n-------------BOOK MANAGEMENT MENU--------\n");
		printf("\n-----------------------------------------\n");
		printf("1.Add new book\n");
		printf("2.Update book\n");
		printf("3.Remove book\n");
		printf("4.Search book\n");
		printf("5.View \n");
		printf("6.Issue book\n");
		printf("7.Return book\n");
		printf("8.List issued book\n");
		printf("9.Save\n");
		printf("10.Exit\n");
		printf("\n----------------------------------------\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
			if(ch==1)
				add_book(&hptr);
			else if(ch==2)
				update(&hptr);
			else if(ch==3)
				remove_book(&hptr);
			else if(ch==4)
				search_book(hptr);
			else if(ch==5)
				view(hptr);
			else if(ch==6)
				issue_book(hptr,&iptr);
			else if(ch==7)
				return_book(hptr,iptr);
			else if(ch==8)
				list_issued(iptr);
			else if(ch==9)
				save_book(hptr);
			else if(ch==10)
			{
				exit_lib(hptr);
				break;
			}
			else
				printf("INVALID CHOICE\n");
	
	}
}
