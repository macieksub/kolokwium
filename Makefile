parent: parent.c
	gcc -c parent.c -o hello.o
child:
	gcc -c child.c -o child.o
main:
	gcc -c main.c -o main.o
all:
	parent, child, main
clean:
	rm *.o*
