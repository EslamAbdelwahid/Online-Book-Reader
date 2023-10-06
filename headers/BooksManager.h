#ifndef ONLINEBOOKREADER_BOOKSMANAGER_H
#define ONLINEBOOKREADER_BOOKSMANAGER_H
#include <bits/stdc++.h>
#include "Book.h"
#include "HelperFunctions.h"
using namespace std;

class BooksManager {
private:
    map < string, Book*> isbn_to_book;
    HelperFunctions helperFunctions;
    void FreeData();
public:
    BooksManager();
    ~BooksManager();
    void AddBook(Book *book);
    Book *ListAndSelectFromAvailableBooks();
};


#endif //ONLINEBOOKREADER_BOOKSMANAGER_H
