# Appendix A Sample Code

This repository consists of a number of examples shared in class from Appendix A.

As most, if not all, of the assignments we are assigned, the source code is organized as a CMake project. While this greatly simplifies our lives, it is nice to know what is happening "underneath the hood," so to speak. That is, we present here, how one would compile these examples from the command line if we had no other choice.

## Where is the source code?

The files used to build different "targets" (i.e., executables) are located in a variety of folders.

### The source files

```text
src
├── main
│   └── cpp
│      └── main.cpp
└── test
    └── cpp
```

So the file `main.cpp` is located deep down a directory tree! But wait, this source file `#include`s a file named `csc232.h`. I don't see that file anywhere here in this tree.

### The include files

```text

```