pointer.o:
	gcc -o switcheroo.o switcheroo.c

run:
	./switcheroo.o

clean:
	-rm *.o
