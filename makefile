CXX=g++-5 -std=c++11

all: app

app: singlylinkedlist.o doublylinkedlist.o stack.o queue.o bst.o main.o
	$(CXX) singlylinkedlist.o doublylinkedlist.o stack.o queue.o bst.o main.o -o main

%.o: %.c
	$(CXX) $@ -c $< # if .cpp changed, recompile .o

clean:
	rm -f singlylinkedlist.o doublylinkedlist.o stack.o queue.o bst.o main.o main
