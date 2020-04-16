CC = g++
Flags = -std=c++14 - Wall - g
OBJS = Node.o LinkedList.o

all: hw14

hw14: hw14.cpp Node.o LinkedList.o
	$(CC) $(FLAGS) hw14.cpp -o hw14 $(OBJS)

Node.o: Node.cpp Node.h
	$(CC) $(FLAGS) -c Node.cpp -o Node.o

LinkedList.o: LinkedList.cpp LinkedList.h
	$(CC) $(FLAGS) -c LinkedList.cpp -o LinkedList.o

clean:
	rm*.o hw14 hw14.tar

tar:
	tar cf hw14.tar hw14.scr makefile hw14.cpp Node.cpp Node.h LinkedList.cpp LinkedList.h
