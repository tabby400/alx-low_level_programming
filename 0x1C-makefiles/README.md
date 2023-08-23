#### MAKEFILES C PROGRAMMING
Makefiles are used to automate the build process of a software project throught the use of instructions.Targets are defines and they are generated , then there are dependencies that are required to create the targets.Some of the target functions are clean,install, tests, dependencies and all.

##### The Requirements
- Editors: vi, vim, emacs are allowed
- Ubuntu 20.04 LTS os to use
- Version of make: GNU Make 4.2.1
- A README.md file at root of folder of project is necessary

##### The Tasks
- Create your first Makefile.
- Create your first useful Makefile
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
- Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
