test: test.o
	g++ test.o -o test

test.o: test.cpp SelectionSortArray.h Array.h
	g++ -c test.cpp

clean:
	rm -f *.o
	rm test
