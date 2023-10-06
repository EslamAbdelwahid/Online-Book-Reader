cmake_minimum_required(VERSION 3.22)
project(OnlineBookReader)

set(CMAKE_CXX_STANDARD 23)

add_executable(OnlineBookReader main.cpp HelperFunctions.cpp HelperFunctions.h BookReaderSystem.cpp BookReaderSystem.h User.cpp User.h UserView.cpp UserView.h AdminView.cpp AdminView.h Book.cpp Book.h BooksManager.cpp BooksManager.h BookReadingSession.cpp BookReadingSession.h UsersManager.cpp UsersManager.h)
