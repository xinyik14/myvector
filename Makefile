all: main.o
	c++ -std=c++11 main.o -o main
main.o: main.cpp generic_My_vec.h
	c++ -std=c++11 -c main.cpp 
clean:
	rm *.o main
