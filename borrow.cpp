#include "header.h"

void borrowBook(Book* lib, const int size, char* index)
{
    bool flag=false;
    for(int i=0; i<size; ++i)
    {
        if(strcmp(lib[i].isbn, index) == 0 && lib[i].available == 1)    // if there is such a book, and it is available
        {
            flag=true;
            lib[i].available=0;
            break;
        }
        else if(strcmp(lib[i].isbn, index) == 0 && lib[i].available == 0)   // if there is such a book, and it is not available
        {
            flag=true;
            std::cout<<"The book is missing from the library."<<std::endl;
            break;
        }
    }
    if( !flag )
    {
        std::cout<<"The book is not found"<<std::endl;
    }
}