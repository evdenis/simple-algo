LIB = ../lib

all: sort

bubble.o: bubble.c bubble.h $(LIB)/swap.h
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@
selection.o: selection.c selection.h $(LIB)/swap.h
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@
insertion.o: insertion.c insertion.h
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@
merge.o: merge.c merge.h $(LIB)/copy.h
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@
quick.o: quick.c quick.h
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@

main.o: main.c sort.h bubble.h insertion.h selection.h merge.h \
 $(LIB)/lib.h $(LIB)/print.h $(LIB)/reverse.h $(LIB)/swap.h $(LIB)/copy.h
	$(CC) $(CFLAGS) -I $(LIB) -c $< -o $@

sort: bubble.o selection.o insertion.o merge.o quick.o main.o
	$(CC) $^ -o $@

clean:
	-rm -fr *.o *.pp.c *.jessie sort

.PHONY: all clean
