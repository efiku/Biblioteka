cmake_minimum_required(VERSION 2.8)
project(Biblioteka)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/Entity/Book.cpp
        src/Entity/Book.h
        src/Fixtures/BooksFixtures.cpp
        src/Fixtures/BooksFixtures.h
        src/main.cpp
        src/Application/Application.cpp
        src/Application/Application.h
        src/Application/Command.cpp
        src/Application/Command.h
        src/Application/Database.cpp
        src/Application/Database.h
        )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Build")
add_executable(Biblioteka ${SOURCE_FILES})