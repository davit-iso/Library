#include "header.h"

void listBooks(Book* lib, const int size)
{
    std::cout<<"List of books"<<std::endl;
    for(int i=0; i<size; ++i)
    {
        std::cout<<lib[i].title<<" "<<lib[i].author<<" "<<lib[i].isbn<<" "<<lib[i].available<<std::endl;
    }
}