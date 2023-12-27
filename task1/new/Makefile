CC=gcc
CFLAGS=-g -O0
FILES=goldbach primes
RUN=-./goldbach

all: $(FILES)

.PHONY: run all clean

primes:  primes.o calculate_primes.o 
	$(CC) $(CFLAGS) -o primes calculate_primes.o primes.o

goldbach: goldbach.o calculate_primes.o
	$(CC) $(CFLAGS) -o goldbach calculate_primes.o goldbach.o

goldbach.o: goldbach.c calculate_primes.h
	$(CC) $(CFLAGS) -c goldbach.c

primes.o: primes.c calculate_primes.h
	$(CC) $(CFLAGS) -c primes.c

calculate_primes.o: calculate_primes.c
	$(CC) $(CFLAGS) -c calculate_primes.c

run: goldbach
	$(RUN)

install: $(FILES)
	echo export PATH=$(PATH):$(pwd) >> ~/.bashrc
	source ~/.bashrc

distr: goldbach.c primes.c calculate_primes.c Makefile
	tar -cvf primes.tar goldbach.c primes.c calculate_primes.c calculate_primes.h Makefile

clean:
	rm -fr *.o goldbach primes

clean_all:
	rm -fr *.o goldbach primes
	rm primes.tar

.DEFAULT:
	echo Error!
