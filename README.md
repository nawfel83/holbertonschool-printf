# Project Printf Holberton School

## 📝 Description
This project is a custom implementation of the standard printf() function in the C language. It displays formatted data on the standard output with basic conversion specifiers.

## 🚀 Features
Support for conversion specifiers:

- %c: Character
- %s: Character string
- %d and %i: Signed integers
- %%: Percentage symbol

## 🛠 Prerequisites
- Operating system: Ubuntu 20.04 LTS
- Compiler: GCC (version 9.3 or higher)
- Git
  
## 💻 Installation
1. Clone the repository :
```
- git clone git clone https://github.com/nawfel83/printf.git
- cd holbertonschool-printf/
```
## 📂 Project structure
- main.h: Header file with declarations
- _printf.c: Main implementation of printf
- functions.c: Conversion functions
- _putchar.c: Character write function

## Compilation
```
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf
```
## 🎮 Examples of use
Basic use
```
#include "main.h"

int main(void)
{
    _printf("Hello, %s! You are %d years old.\n", "World", 42);
    return (0);
}
```
Result
```
Hello, World! You are 42 years old.
```
## 🧪 Testing
Test execution
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test_printf
./test_printf
```
Checking for memory leaks
```
valgrind --leak-check=full ./test_printf
```
## Man Page 
man ./man_3_printf

## Flowchart
![Capture d'écran 2025-03-26 180625](https://github.com/user-attachments/assets/c3e0669f-060e-4271-bec9-27009533f5c1)

