CC=g++
all:
	$(CC) -Wfatal-errors *.cpp
clean:
	rm -f a.out
