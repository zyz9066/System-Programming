# you are to complete this Makefile, then use it with make, when you want to test
	# goal is the executable file sort, it must come first
	# NOTE that the indented lines start with a TAB character

dosort : sortmain.o swap.o sort.o stringutils.o                	# list all the .o files here
	gcc -o dosort sortmain.o swap.o sort.o stringutils.o 				# HERE TOO
	# run this by typing  ./dosort
swap.o : swap.s			# (re)compile sources if necessary
	gcc -c swap.s			# -c means stop at the .o file stage

sortmain.o : sortmain.c sort.h
	gcc -std=c99 -c sortmain.c
stringutils.o : stringutils.c sort.h
	gcc -c stringutils.c
sort.o : sort.c sort.h
	gcc -c sort.c

clean:			# Removes object and backup files when you type: make clean
	rm *.o *~

