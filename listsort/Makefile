# you are to complete this Makefile, then use it with make, when you want to test
	# goal is the executable file sort, it must come first

dosort : sortmain.o sort.o stringutils.o # swap.o	# list all the .o files here
	gcc -o dosort sortmain.o sort.o stringutils.o 				# and HERE TOO
	# run this by typing  ./dosort
swap.o : swap.s			# (re)compile sources if necessary
	gcc -c swap.s			# -c means stop at the .o file stage

sortmain.o : sortmain.c sort.h
	gcc -c sortmain.c
# ... all the files that need compiling
stringutils.o : stringutils.c sort.h
	gcc -c stringutils.c
sort.o : sort.c sort.h
	gcc -c sort.c
clean:			# Removes object and backup files when you type: make clean
	rm *.o *~
