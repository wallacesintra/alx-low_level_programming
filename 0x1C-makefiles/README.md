# **Makefiles**
**make** - build automation tool that builds executable programs & libraries from source code by reading files called **Makefiles**

**Makefiles** - files that contains a set of directives used by make command to build & manage the project. It specifies:
1. Target: file/action that needs to be built.
2. Dependencies: files/actions that the target depends on.
3. Commands: shell commands needed to build the target from its dependencies.


**example of make file**

```c
# Define variables
CC = gcc
CFLAGS = -Wall -O2

# Define targets and their dependencies
my_program: main.o utils.o
    $(CC) $(CFLAGS) -o my_program main.o utils.o

main.o: main.c utils.h
    $(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
    $(CC) $(CFLAGS) -c utils.c

# Define a clean target to remove generated files
clean:
    rm -f my_program *.o
```


## **making a makefile**
1. **write a makefile** : create a makefile, define targets, dependencies and commands for building your project.
2. **Define targets & dependencies** : specify targets(executables, libraries) and dependencies(source code, header files) in the makefile.
3. **write commands** : write shell cmds to build to targets from its dependencies.
4. **Run 'make'** : navigate to the dir containing the makefiles and run the 'make' cmd. 
5. **customize** : include additional features like cleaning generated files, specifying compiler flags or handling specify build scenarios.
