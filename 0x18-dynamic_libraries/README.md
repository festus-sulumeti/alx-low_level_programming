0x18. C - Dynamic libraries
This directory contains the code for the project 0x18 of the ALX Software Engineering curriculum. The project is about dynamic libraries in C.

Overview
A dynamic library is a library that is not linked with the executable file at compile time. Instead, the dynamic library is linked with the executable file at runtime. This allows the executable file to be smaller, because it does not need to include the code from the dynamic library.

How to create a dynamic library
To create a dynamic library, you need to create an object file for the library. This can be done using the gcc compiler with the -fPIC flag. The -fPIC flag tells the compiler to generate position-independent code, which means that the code can be loaded and executed at any address in memory.

Once you have created the object file, you can create the dynamic library using the ar tool. The ar tool creates an archive file that contains the object file.

To create a dynamic library called libmylib.so, you would use the following commands:

1. gcc -Wall -fPIC -c mylib.c
2. ar -rcs libmylib.so mylib.o
3. How to use a dynamic library
4. To use a dynamic library, you need to link the executable file with the dynamic library at runtime. This can be done using the ld linker.

To link the executable file main.c with the dynamic library libmylib.so, you would use the following command:

ld -o main main.o -lmylib
The -lmylib flag tells the linker to link the executable file with the dynamic library libmylib.so.

Project tasks
The project consists of the following tasks:

1. Create a dynamic library that contains a function called add().
2. Create an executable file that uses the add() function from the dynamic library.
3. Test the executable file.
4. Requirements

To complete this project, you will need the following:

1. A C compiler
2. The ar tool
3. The ld linker
