
all: hello loop

hello: hello.o
	gcc -o hello hello.o

hello.o: hello.c
	gcc -c hello.c

loop: loop.o
	gcc -o loop loop.o

loop.o: loop.c
	gcc -c loop.c

clean:
	rm -f hello.o loop.o hello loop