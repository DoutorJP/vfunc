vfunc: main.o
	gcc -o vfunc main.o

main.o: main.c src/Vfunc.h
	gcc -c main.c

clean: rm vfunc main.o
