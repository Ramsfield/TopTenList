CC=g++
CXXFLAGS=-std=c++11
all:
	$(CC) -Wfatal-errors *.cpp
clean:
	rm -f a.out
