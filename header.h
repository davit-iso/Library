#pragma once
#include <iostream>
#include <cstdlib> 
#include <cstring>

struct Book
{
    char title[100];
    char author[100];
    char isbn[20];
    int available;
};

void listBooks(Book* lib, const int size);
void searchBook(Book* lib, const int size, char* sp);
void borrowBook(Book* lib, const int size, char* index);
void returnBook(Book* lib, const int size, char* index);
void addBook(Book** lib, int* size, int* n);
