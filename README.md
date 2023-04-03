# <PrintF>

## Description

This project was motivated by a desire to take on new language challenges and the opportunity to collaborate with a partner. Holberton School provided us with this proposal, allowing us to test our skills as programmers. Our code, _printf, is an alternative to the C language print command, "printf." It performs many of the same functions as its counterpart.

## Índice (opcional)

Si su README es extenso, agregue un índice para facilitar que los usuarios encuentren lo que necesitan.

- [Use](#use)
- [Functions](#Functions)
- [Requirements](#Requirements)
- [More Info](#More-Info)

## Use

Its usage is very simple and it accepts the same options as its counterpart printf. For example:

_printf("Hello %s\n", "world");

_printf("After the number %d, follows %i", 1, 2);

_printf("%colberton %cschool", 'H', 'S');

_printf("You have %%78 battery left in your cell phone");

## Functions

main_controller is a main function that controls the occurrence of special characters in _printf, such as % or \.

switch_controller controls the cases of % by calling its respective function depending on the character that follows the % symbol.

function_s checks whether the reference of %s is NULL. If it is, it prints "(null)" and counts its characters. Otherwise, it prints the content of the reference and returns the number of characters.

function_c prints the referenced character that follows the %c format specifier.

function_decimal recursively prints the digits of a decimal number in the correct order. If the number is negative, it prints a minus sign first. It counts the number of digits it prints and returns that count.



## Requirements

General

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project

## More-Info

Authorized functions and macros

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)

