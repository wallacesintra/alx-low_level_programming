Dynamic library 
it is loaded into memory at runtime, its functions can be called by the application that loaded it.
.so - linux
.dll - windows

[creating a dynamic library on linux]: 
1. compile the library source using gcc -c -fpic filename.c to an object file of the library source file.

2. create a shared library with gcc -shared -o libraryname.so filename.o

$LD_LIBRARY_PATH - environment variable used to specify the directories where the dynamic linker should look for shared libraries at runtime.

to set $LD_LIBRARY_PATH environment variable, use export LD_LIBRARY_PATH= /path/to/library. 

to set the $LD_LIBRARY_PATH environment variable permanently by adding the path to shell's startup file e.g ~/.bashrc for bash.

[differences between static and shared libraries] :

    Definition: A static library is a collection of object files that are linked with an executable at compile time, while a shared library is a collection of object files that are linked with an executable at runtime.

    Size: Static libraries are generally larger than shared libraries because they contain all the code required to execute the program. Shared libraries are smaller because they contain only the code that is required by the program at runtime.

    Linking time: Static libraries are linked with an executable at compile time, while shared libraries are linked with an executable at runtime.

    External file changes: If an external file changes, the executable that uses a static library will have to be recompiled, while the executable that uses a shared library will not.

    Compatibility: Static libraries are compatible with all versions of the executable that use them, while shared libraries are only compatible with the version of the executable that they were compiled against.

    Execution time: Static libraries are faster to execute because all the code is present in the executable, while shared libraries are slower to execute because they have to be loaded into memory at runtime.




nm: This command is used to display the symbols in an object file. It can be used to list the symbols in an executable file or a shared library. The syntax for using nm is as follows:
nm [options] <object-file>
nm -g libfoo.so


ldd: This command is used to print the shared libraries required by each program or shared library specified on the command line. The syntax for using ldd is as follows:
ldd [options] <file>
For example, to print the shared libraries required by the executable file myprogram, you would run the following command:
ldd myprogram


ldconfig: This command is used to configure dynamic linker run-time bindings. It is used to tell the system about new locations of shared libraries. The syntax for using ldconfig is as follows:
ldconfig [options]
For example, to create a cache database of all libraries based on the configuration file /etc/ld.so.conf, you would run the following command:
ldconfig -v
This will create a cache database of all libraries based on the configuration file /etc/ld.so.conf