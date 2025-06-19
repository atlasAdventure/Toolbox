#target : prerequisites
#<tab>command
#	command
executableName : main.o				
	g++ main.o -o executableName                
main.o: main.c
	g++ -c main.c -o main.o                    
main.c:	
	echo "#include <iostream> \n int main() { \n std::cout << \"Test Prog\" << std::endl; \n return 0; }" > main.c

# Clean
clean:
	rm -f main.c main.o executableName 