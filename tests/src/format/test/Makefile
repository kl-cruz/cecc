CFLAGS = -g -I../src -std=c99 -Wall -pedantic -Wunused 
LDFLAGS = -g
CC = gcc

all: testharness
	./testharness

format.o: ../src/format.c ../lib/printf.c
	$(CC) $(CFLAGS) -c $< -o $@

printf.o: ../lib/printf.c
	$(CC) $(CFLAGS) -c $< -o $@

testharness: testharness.o format.o printf.o
	$(CC) $(CFLAGS) testharness.o format.o printf.o -o testharness

clean:
	rm testharness
	rm *.o

