fun.o	:	fun.h	fun.c
	gcc fun.c -c

main.o	:	main.c
	gcc main.c -c

output	:	fun.o	main.o
	gcc fun.o main.o -o output


clean	:	
	rm -rf	main.o	fun.o

