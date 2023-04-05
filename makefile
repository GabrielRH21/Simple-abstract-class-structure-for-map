CC=g++
CXXFLAGS=-g -std=c++14 -Wall

OBJS= main.o

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o Ejecutable ${OBJS}


clean:
	rm -rf *.o Ejecutable
