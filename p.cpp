#include "header.h"

int main()
{
    int n=0;
    int size=0;
    std::cout<<"Input count of books"<<std::endl;
    std::cin>>n;
    size=n;
    Book* lib=(Book*)malloc(n*(sizeof(Book)));
    std::cout<<"Enter itle, author and ISBN for "<<n<<" books"<<std::endl;
    for(int i=0; i<n; ++i)
    {
        std::cin>>lib[i].title>>lib[i].author>>lib[i].isbn;
        lib[i].available=1;
    }
    char t[10];
    std::cout<<"input option (add , list , search , borrow , return or exit)"<<std::endl;
    std::cin>>t;
    while (strcmp(t, "exit") != 0)
    {
        if(strcmp(t, "add") == 0)
        {
            addBook(&lib, &size, &n);
        }
        else if(strcmp(t, "list") == 0)
        {
            listBooks(lib,size);
        }
        else if(strcmp(t, "search") == 0)
        {
            char sp[30];
            std::cin.ignore();
            std::cin.getline(sp, 100);
            searchBook(lib, size, sp);
        }
        else if(strcmp(t, "borrow") == 0)
        {
            char index[20];
            std::cout<<"Input book's ISBN"<<std::endl;
            std::cin>>index;
            borrowBook(lib, size, index);
        }
        else if(strcmp(t, "return") == 0)
        {
            char index[20];
            std::cout<<"Input book's ISBN"<<std::endl;
            std::cin>>index;
            returnBook(lib, size, index);
        }
        else
        {
            break;
        }
        std::cout<<"input option (add , list , search , borrow , return or exit)"<<std::endl;
        std::cin>>t;
    }
    if(strcmp(t, "exit") == 0)
    {
        std::cout<<"End of the program"<<std::endl;
    }
    else
    {
        std::cout<<"Wrong input!!!"<<std::endl;
    }
    free(lib);
    return 0;
}


