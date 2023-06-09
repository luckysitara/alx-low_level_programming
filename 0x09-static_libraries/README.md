#Introduction

Before starting to talk about the subject matter, let us take a brief look at the compilation phases of a C program.
There are basically four phases:

    Pre-processing
    Compilation
    Assembly
    Linking

In this article, we will focus on the static libraries and their role in the linking phase of a program. But, first of all, let us define a library.
What is a library and what is it good for?

A library is a collection of code routines (functions, classes, variables, and so on) that can be called upon when building our program, so instead of writing it ourselves, we can go and get it from something that has already been written and optimized. That is where the idea behind libraries comes from. We are reusing blocks of codes that have come from somewhere else.

Basically, we have two kinds of libraries:

    static libraries
    shared (or dynamic) libraries

The main reason for writing a library is to allow code reusability, thus save considerable development time.
What is a static library and how does it work?

A static library is a file containing a collection of object files (*.o) that are linked into the program during the linking phase of compilation and are not relevant during runtime.

Alt Text
As shown in the diagram above, when a program is compiled, the compiler generates an object file from a source file. After generating the object file, the compiler also invokes the Linker. The role of the linker, in this case, is to copy the code of the library to our object file.

Basically, static libraries are just a collection of object files that are merged by the linker with another object file to form a final executable.

Conventionally, they start with “lib” and end with “.a” or “.lib” (depending on your platform).
How to create static libraries?

To create a static library, we need to specify to the compiler, which is GCC in our case, that we want to compile all library codes (*.c) into object files (*.o) without linking. To do that we are going to use the command below.

$ gcc -c -Wall -Werror -Wextra *.c

Flags description:
-c: Compile and assemble, but do not link.
-Wall, -Werro and -Wextra: These aren’t necessary but they are recommended to generate better code.

Note that the "*.c" matches all files in the current working directory with the ".c" extension.

For example, let us take two c files, add.c, and mul.c which make respectively the addition and the multiplication of two integers, and a header file that contains the prototypes of these functions. The picture below shows the output generated after using the command.

Alt Text

Once we have object file(s), we can now bundle all object files into one static library.
To create a static library or to add additional object files to an existing static library, we have to use the GNU ar (archiver) program. We can use a command like this:

$ ar -rc libname.a *.o

This command creates a static library named "libname.a" and puts copies of the object files "add.o" and "mul.o" in it. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to insert object files or replace existing object files in the library, with the new object files.

After an archive is created or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library and to make sure that the order of the symbols in the library will not matter during compilation. There are two ways to create or update the index. The first one is, by using the command ranlib.

$ ranlib libname.a

or by adding an extra flag (-s) to the ar command and it becomes like this:

$ ar -rcs libname.a *.o

The picture below shows the execution of these commands on our example.

Alt Text

In order to list the names of the object files in our library, we can use the ar command with -t flag.

Alt Text
How to use them?

Now our static library "libname.a" is ready to be used. we can use it in a program. This is done by adding the library's name to the object file(s) given to the linker. First, let us create a C source file that uses the above created static library.
Alt Text

Now we can use the command below to create our final executable program:

$ gcc main.c -L. -lname -o main

This will create a program using the object file "main.o", and any symbols it requires from the "name" static library.

Flags description:
-L : Specifies the path to the given libraries ('.' referring to the current directory)
-l : Specifies the library name without the "lib" prefix and the ".a" suffix, because the linker attaches these parts back to the name of the library to create a name of a file to look for.

All we have to do now is to run our program.

Alt Text
That was my summary of static libraries!
Hopefully, you found this useful. In the next blog post, we will cover dynamic libraries and the difference between them and static libraries.

Happy learning!
