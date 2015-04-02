all: project7
project7: test.cpp triangle.o 
	g++ test.cpp triangle.o -o project7
triangle.o: triangle.cpp 
	g++ -c triangle.cpp 

clean:
	rm -rf  *.o  project7

