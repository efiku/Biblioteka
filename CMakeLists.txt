cmake_minimum_required(VERSION 3.3)
project(Biblioteka)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/Entity/Book.cpp
        src/Entity/Book.h
        src/Entity/BookRepository.cpp
        src/Entity/BookRepository.h
        src/Fixtures/BooksFixtures.cpp
        src/Fixtures/BooksFixtures.h
        src/Storage/InMemoryStorage.cpp
        src/Storage/InMemoryStorage.h
        src/main.cpp
        src/Storage/StorageInterface.cpp
        src/Storage/StorageInterface.h
)

add_executable(Biblioteka ${SOURCE_FILES})