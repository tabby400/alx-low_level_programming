FILE I/O IN C PROGRAMMMING LANGUAGE

The requirements

The allowed editors are vi, vim and emacs|
Files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89|
All the files should end with a new line|
README.md file, at the root of the folder of the project is mandatory|
Not allowed to use global variables|
No more than 5 functions per file|
Only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden|
Allowed syscalls: read, write, open, close|
Prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h|
Always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...|
Dont forget to push your header file|

TASKS|
Function that reads a text file and prints it to the POSIX standard output.|
Function that creates a file|
Function that appends text at the end of a file|
Program that copies the content of a file to another file.|

A file can be used to store data in huge amounts. In C there are management functions that help in creating, opening, reading and closing files.There are two types of files in file handling in C to manipulate data and they are text files and binary files.

