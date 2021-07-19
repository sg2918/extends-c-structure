
inherit: inherit.o
	gcc -o $@ $^

clean:
	rm -f *.o
	rm -f inherit
