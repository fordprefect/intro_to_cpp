#session-01: Using header file and classes

This lesson covers the use of a header file. The only time a header file should be compiled is when
it is to be used as a pre-compiled header. A header file should never be linked as part of the build process.

NumUtil.h
 - contains the class and function declaration together
 - includes a directive to prevent the header file from being loaded more than once.

In session-00, a forward declaration was used in the CPP implmentation file containing the main function.
No concept of "class" was introduced in that example. In this session, we introduce the NumUtil class
which encapsulates the "add(int x, int y)" function declaration.
