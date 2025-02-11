#include "header.h"

void searchBook(Book* lib, const int size, char* sp)
{
    bool flag=false;
    for(int i=0; i<size; ++i)
    {
        if (strcmp(lib[i].title, sp) == 0 || strcmp(lib[i].author, sp) == 0)    //if such an author or title exists, output the data for that book
        {
            flag=true;
            std::cout<<lib[i].title<<" "<<lib[i].author<<" "<<lib[i].isbn<<" "<<lib[i].available<<std::endl;
            break;
        }
    }
    if(!flag)
    {
        std::cout<<"The book is not found"<<std::endl;
    }
}