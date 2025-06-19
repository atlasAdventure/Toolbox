/**
 * 
 */

 #include <iostream>

#include "Array.hpp"

 int main(int argc, char * argv[])
 {
    std::cout << "Makefile with variables" << std::endl;

   Array anArray = Array();

   std::cout << "function value: "<< anArray.returnOne() << std::endl;

    return 0;
 }