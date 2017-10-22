CC=g++
CFLAGS=-Wall -Werror
LIBS=-pthread

main: main.o
	$(CC) main.o -o main $(LIBS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -c -o main.o

run: main
	./main
