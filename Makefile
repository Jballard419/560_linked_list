linkedlist: main.o PreconditionViolationException.o
	g++ -g -std=c++11 main.o  -o linkedlist

main.o: main.cpp node.h  linkedlist.hpp
	g++ -g -std=c++11 -c main.cpp  linkedlist.h

clean:
	rm *.o linkedlist
