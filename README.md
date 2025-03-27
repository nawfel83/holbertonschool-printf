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
![image](https://github.com/user-attachments/assets/ff79ac1c-25b2-4894-9a43-08a8b76d31d6)


## Flowchart


