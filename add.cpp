#include "header.h"

void addBook(Book** lib, int* size, int* n) 
{
    if(*size >= *n)   // if libriary size >= library memory increase capacity
    {
        *n = (*n) * 2;
        *lib = (Book*)realloc(*lib, (*n) * sizeof(Book));
    }
    std::cout<<"Enter title, author and isbn"<<std::endl;
    std::cin.ignore(); 
    std::cin.getline((*lib)[*size].title, 100);
    std::cin.getline((*lib)[*size].author, 100);
    char test[20];   //test for isbn input
    bool flag=true;
    while(flag)
    {
        flag=false;
        std::cin.getline(test, 20);   //input of isbn version
        for(int i=0; i<(*size); ++i)
        {
            if(strcmp(test, (*lib)[i].isbn) == 0)    // if the version exists try again
            {
                std::cout<<"Try again"<<std::endl;
                flag=true;
                break;
            }        
        }
        if(!flag)   // if the version is new
        {
            for(int i=0; ; ++i)
            {
                if(test[i] == '\0')
                {
                    break;
                }
                (*lib)[*size].isbn[i]=test[i];  // accept the version
            }
        }
    }
    (*lib)[*size].available=1;
    ++(*size);  
}