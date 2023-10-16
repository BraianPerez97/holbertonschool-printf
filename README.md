# Holberton School _printf Project

## Introduction

This project involves the implementation of a simplified version of the C library function `printf`. The goal is to create a function named `_printf` that produces output according to a given format. The project follows specific guidelines, including code style, allowed editors, and compilation requirements.

## Table of Contents

- [General Information](#general-information)
- [GitHub](#github)
- [Compilation](#compilation)
- [Tasks](#tasks)
  - [Task 0: I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](#task-0-im-not-going-anywhere-you-can-print-that-wherever-you-want-to-im-here-and-im-a-spur-for-life)
  - [Task 1: Education is when you read the fine print. Experience is what you get if you don't](#task-1-education-is-when-you-read-the-fine-print-experience-is-what-you-get-if-you-dont)
  - [Task 2: Just because it's in print doesn't mean it's the gospel](#task-2-just-because-its-in-print-doesnt-mean-its-the-gospel)

## General Information

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
- **Header File:** The prototypes of all functions should be included in your header file named `main.h`.
- **Header File Guard:** All your header files should be include guarded.
- **Global Variables:** Not allowed
- **Number of Functions:** No more than 5 functions per file
- **File Structure:** Your files should end with a new line.
- **README.md:** A README.md file, at the root of the folder of the project is mandatory.
- **Betty Style:** Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## Compilation

Your code will be compiled using the following command:

``bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Tasks
Task 0: I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

    Prototype: int _printf(const char *format, ...)
    Returns: the number of characters printed (excluding the null byte used to end output to strings)
    Writes output to stdout, the standard output stream
    Handles the following conversion specifiers:
        c
        s
        %
    Does not reproduce the buffer handling of the C library printf function
    Does not handle the flag characters, field width, precision, or length modifiers

GitHub repository: holbertonschool-printf
Task 1: Education is when you read the fine print. Experience is what you get if you don't

    Handles the following conversion specifiers:
        d
        i
    Does not handle the flag characters, field width, precision, or length modifiers

GitHub repository: holbertonschool-printf
Task 2: Just because it's in print doesn't mean it's the gospel

    Create a man page for your function.

Author

Braian Perez - morfiproduction97@gmail.com
Nashalys Fernandez - naferi.zoe@gmail.com
