all:hello.o hello
hello.o:hello.c
	gcc -c hello.c
hello:hello.o
	gcc hello.o -o hello
	./hello
clean:
	rm -rf hello hello.o
