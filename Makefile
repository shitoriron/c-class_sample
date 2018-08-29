act: main.o vecsum.o
	g++ -std=c++11 -o act main.o vecsum.o

main.o: main.cpp vecsum.h
	g++ -std=c++11 -c -o main.o main.cpp

vecsum.o: vecsum.cpp vecsum.h
	g++ -std=c++11 -c -o vecsum.o vecsum.cpp