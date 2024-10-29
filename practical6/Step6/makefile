CC = gcc #C compiler
CCFLAGS = -O3 # some flag for compiler
LDFLAGS = -lm # some flags for compilation

# all: mmc

mmc: main.o mm.o 
		$(CC) -o mmc main.o mm.o $(LDFLAGS)
# $(CC) -o $@ $^ $(LDFLAGS)


mm.o: mm.c 
		$(CC) -c $(CCFLAGS) mm.c
# $(CC) -c $(CCFLAGS) $< #name of the first prerequesite

main.o: main.c 
		$(CC) -c $(CCFLAGS) main.c
# $(CC) -c $(CCFLAGS) $<

clean:
	rm *.o