#target : prerequisites
#<tab>command
#	command

# this works, it compiles and links
#	array.cpp and main.cpp into ./all executable program
#all: main.o 
#	g++ $^ -o all
#
#main.o: main.cpp
#	g++ -c main.cpp -o main.o
#
#array.o: array.cpp
#	g++ -c array.cpp -o array.o 
#
#.PHONY:clean
#clean:
#	rm -f $(OBJECTS)
#	rm all



# Variables created with := and referenced with ${}
CXX:= g++

CXXFLAGS:= -Wall -g -std=c++17

OBJECTS:= main.o array.o

# all : make this first so it will be the default target
# $^ outputs all prerequisits
all: ${OBJECTS}
	echo "making all"
	${CXX} $^ -o all	

# $@ outputs target name
main.o: main.cpp
	echo "make $@"
	${CXX} -c ${CXXFLAGS} main.cpp -o $@

array.o: array.cpp
	echo "make array.o"
	${CXX} -c ${CXXFLAGS} array.cpp -o array.o


.PHONY:	clean
clean:
	rm -f ${OBJECTS} all