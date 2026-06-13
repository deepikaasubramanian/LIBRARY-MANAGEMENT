#include<stdio.h>
#include<stdlib.h>
#include"project2.h"
void exit_book(struct st *ptr)
{
        int op;
        while(1)
        {
                printf("1.Save and Exit\n");
                printf("2.Exit\n");
                scanf(" %d",&op);
                if(op==1)
                {
                        save_book(ptr);
                        printf("Exiting\n");
                        break;
                }
                else
                {
                        printf("Exiting\n");
                        break;
                }
        }

