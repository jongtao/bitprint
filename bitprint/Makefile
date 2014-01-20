CC= gcc
CFLAGS= -Wall -pedantic -Wextra

bitprint: main.o bitprint.o
	$(CC) $(CFLAGS) -o $@ main.o bitprint.o

main.o: main.c bitprint.h
bitprint.o: bitprint.c bitprint.h

clean:
	rm -rf *.o core
