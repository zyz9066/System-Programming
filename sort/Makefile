#
# Your NAME:  (here!)
#

# you are to complete this Makefile, 
#   when you want to test, type: make

	# goal is the executable file dosort, it must come first

dosort : sortmain.o arrayutils.o sort.o			# list all the .o files here
	gcc -o dosort sortmain.o arrayutils.o sort.o 			# and here
	
	# executable will be namend dosort, run by typing:  ./dosort
	
swap.o : swap.s			# (re)compile sources if necessary
	gcc -c swap.s			# -c means stop at the .o file stage

sortmain.o : sortmain.c sort.h
	gcc  -c sortmain.c
	
#  and 2 more (at least)
arrayutils.o : arrayutils.c sort.h
	gcc -c arrayutils.c
sort.o : sort.c sort.h
	gcc -c sort.c
# invoke this by typing:  make clean
clean:			# this is optional, to clean up when it's working
	rm *.o *~		#  you don't need to keep the object files

