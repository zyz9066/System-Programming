# you are to complete this Makefile, then use it with make, when you want to test
	# goal is the executable file quicksort, it must come first

qsort : qsmain.o partition.o quicksort.o qsutils.o swap.o	# list all the .o files here	(prerequisites)
	gcc -o qsort qsmain.o partition.o quicksort.o qsutils.o swap.o	# and here	# -o names the output file, different than a.out
	# run this by typing  ./qsort
swap.o : swap.s			# (re)compile sources if necessary
	gcc -c swap.s			# -c means stop at the .o file stage
				# and so forth
			# don't forget that header files are prerequsites for any source that #include's them
partition.o : partition.c quicksort.h
	gcc -c partition.c
quicksort.o : quicksort.c quicksort.h
	gcc -c quicksort.c
qsutils.o : qsutils.c quicksort.h
	gcc -c qsutils.c
qsmain.o : qsmain.c quicksort.h
	gcc -c qsmain.c
clean:			# Removes object and backup files when you type: make clean
	rm *.o *~