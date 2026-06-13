d:project2.o main_book.o add_book.o update.o remove_book.o search_book.o view.o issue_book.o return_book.o list_issued.o save_book.o exit_lib.o 
		cc project2.c main_book.c add_book.c update.c  remove_book.c search_book.c view.c issue_book.c return_book.c list_issued.c save_book.c exit_lib.c -o d
project2.o:project2.c
	cc -c project2.c
main_book.o:main_book.c
	cc -c main_book.c
add_book.o:add_book.c
	cc -c add_book.c
update.o:update.c
	cc -c update.c
remove_book.o:remove_book.c
	cc -c remove_book.c
search_book.o:search_book.c
	cc -c search_book.c
view.o:view.c
	cc -c view.c
issue_book.o:issue_book.c
	cc -c issue_book.c
return_book.o:return_book.c
	cc -c return_book.c
list_issued.o:list_issued.c
	cc -c list_issued.c
save_book.o:save_book.c
	cc -c save_book.c
exit_lib.o:exit_lib.c
	cc -c exit_lib.c


