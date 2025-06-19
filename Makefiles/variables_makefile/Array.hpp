/**
 * Array Class
 */

 // For std:: library
#include <iostream>

#ifndef _ARRAY_H_
#define _ARRAY_H_

#define MAX_SIZE_ARRAY 100

class Array 
{

    public:

        // Destructor
        ~Array()
        {
            // Free memory
            //delete data_;
        }
        // Constructor 
        Array() :
            size_(0),
            max_size_(MAX_SIZE_ARRAY)
        {
            
        }

        int returnOne(void);
        
    private:
        // pointer to the data
        char * data_;

        // size of the array
        std::size_t size_;

        // max size of the array
        std::size_t max_size_;  
};
 #endif // _ARRAY_H_