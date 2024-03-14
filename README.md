## utils_lib

A custom C library made up of standard and utility functions to help in the development of more complex programs.

## Table of Contents

- [Description](#Description)
- [Getting Started](#getting-started)
- [Usage](#usage)


## Description

In many programming projects, there is a need to implement various common functions such as string manipulation, memory allocation, and linked list operations. Utils_lib provides an implementation of these functions to enable focus on higher-level problem-solving without having to repeatedly implement the same basic functionality. It is a great practise to understand low-level programming concepts.

## Getting Started

To use the utils_lib library in your project, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://git@github.com:imoore02/utils_lib.git

2. Compile the library:

	```bash
	make

3. Link the library with your project's source code using the 'libft.a' archive file and the '-l' flag.

## Usage

Once the library is compiled and linked with your project, you can use the provided functions just like any other standard library functions. Include the libft.h header file in your source files where you want to use the functions, and link your project with the libft.a library file.

Here's an example of how to include the library in your C file:

	#include "libft.h"

	int main() {
		char *str = "Hello, world!";
		ft_putstr(str);
		return 0;
	}




