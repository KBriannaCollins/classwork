OBJS = main.o vector.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

test : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o test.out

main.o : main.cpp vector.h
	$(CC) $(CFLAGS) main.cpp

vector.o : vector.cpp vector.h
	$(CC) $(CFLAGS) vector.cpp
