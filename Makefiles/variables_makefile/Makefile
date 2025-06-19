# Makefile for Variables Project

#Variables
CXX:=g++
CXXFLAGS:= -Wall -g -std=c++17
OBJECT_FILES:= main.o Array.o 

#default target 
#  $@ = Target Name
#  $^ = prerequisits. used like this its the prerequisit to the current target (object files are the prereqs to all)
all: ${OBJECT_FILES}
	@echo "3 Make Target $@"	
	@echo "4 prereq: $^"
	g++ ${CXXFLAGS} $^ -o all

#static pattern rule : for each .cpp file, run command, to create its object file
#	in this case, the .cpp files are the prerequisits
${OBJECT_FILES}: %.o: %.cpp 
	@echo "1 make $@"
	@echo "2 prereq: $^"
	$(CXX) -c ${CXXFLAGS} $^ -o $@ 

clean:
	rm -f ${wildcard *.o} all

# Output:
# make
# echo "make main.o"
# make main.o
# echo "prereq: main.cpp"
# prereq: main.cpp
# g++ -c -Wall -g -std=c++17 main.cpp -o main.o 
# echo "make Array.o"
# make Array.o
# echo "prereq: Array.cpp"
# prereq: Array.cpp
# g++ -c -Wall -g -std=c++17 Array.cpp -o Array.o 
# echo "Make Target all"
# Make Target all
# echo "prereq: main.o Array.o"
# prereq: main.o Array.o
# g++ -Wall -g -std=c++17 main.o Array.o -o all