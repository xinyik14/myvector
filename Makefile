OBJS = main.o 
CC = g++
CFLAGS = -std=c++11 -Wall -c
LFLAGS = -std=c++11 -Wall

all: $(OBJS) 
	$(CC) $(LFLAGS) $(OBJS) -o main
main.o: main.cpp My_vec.h
	$(CC) $(CFLAGS) main.cpp
clean:
	\rm *.o main
