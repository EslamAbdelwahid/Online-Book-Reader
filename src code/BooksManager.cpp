#include "BooksManager.h"
using namespace std;
BooksManager ::BooksManager() {
}
void BooksManager::FreeData() {
    for(auto pair : isbn_to_book){
        delete pair.second;
    }
    isbn_to_book.clear();
}
BooksManager ::~BooksManager() {
    FreeData();
}
void BooksManager::AddBook(Book *book) {
    isbn_to_book[book->GetIsBn()] = book;
}
Book *BooksManager::ListAndSelectFromAvailableBooks() {
    vector<string>menu;
    for(auto [IsBn , Book] : isbn_to_book){
        menu.push_back(Book->GetTitle());
    }
    if(menu.empty()){
        cout << "There is no books now.\n";
        Book *book = new Book();
        return book;
    }
    int choice = helperFunctions.ShowMenu(menu);
    int idx = 1;
    for(auto [IsBn, Book] : isbn_to_book){
        if(idx == choice) {
            return Book;
        }
        ++idx;
    }
}
