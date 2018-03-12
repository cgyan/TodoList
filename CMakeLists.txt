cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

project("To Do List")

# recursively search src dir for cpp files and add to MySources var
file(GLOB_RECURSE MySources src/*.cpp)

add_subdirectory(TodoCore)

add_executable(todo main.cpp ${MySources})
target_link_libraries(todo todoCore)
