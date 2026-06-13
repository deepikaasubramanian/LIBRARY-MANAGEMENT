#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//extern struct issue *issuehead=NULL;
struct book
{
	int bookid;
	char title[100];
	char author[100];
	int quantity;
	struct book *next;
};
struct issue
{
	int issueid;
	int bookid;
	int userid;
	char username[50];
	char title[100];
	char issuedata[20];
	char duedata[100];
	char returndata[20];
	int returned;
	int  fine;
	struct issue *next;
};
extern struct issue *issuehead;
void add_book(struct book **);
void update(struct book**);
void remove_book(struct book**);
void search_book(struct book *);
void view(struct book*);
void issue_book(struct book *ptr,struct issue **iptr);
void return_book(struct book *ptr,struct issue *iptr);
void list_issued(struct issue *iptr);
void save_book(struct book*);
void exit_lib(struct book*);


