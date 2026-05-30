*This project has been created as part of the 42 curriculum by jomatic.*

# ft_printf

## Description

This project implements a simplified version of the standard C `printf` function, named `ft_printf`. It is part of the 42 curriculum and demonstrates variadic function handling, format string parsing, and basic number/string output formatting.

The goal is to reproduce a subset of the `printf` behavior with support for the following format specifiers:
- `%c` : character
- `%s` : string
- `%p` : pointer address
- `%d`, `%i` : signed decimal integer
- `%u` : unsigned decimal integer
- `%x`, `%X` : unsigned hexadecimal integer
- `%%` : literal percent sign

## Instructions

### Compilation

From the project root directory, run:

```sh
make
```

This builds `libftprintf.a` and compiles the project sources.

### Using the library

The main implementation is in `ft_printf.c`. The library header is `libftprintf.h`.

To test the implementation separately, you can compile a driver program against the library:

```sh
cc -Wall -Wextra -Werror -I./libft main.c libftprintf.a -o test_printf
./test_printf
```

### Notes

- The project uses the provided `libft` library for helper functions such as `ft_strlen`, `ft_putchar_fd`, and `ft_putstr_fd`.
- Temporary test code in `main.c` is commented out by default, so the library source file remains clean.

## Algorithm and Data Structure Explanation

### Parsing algorithm

`ft_printf` processes the input format string one character at a time. When it encounters a percent sign `%`, it reads the next character to identify the format specifier. The implementation uses a simple dispatch strategy:

1. If the next character is another `%`, it outputs a literal `%`.
2. If the character matches one of the supported specifiers, it calls `check_args`.
3. Otherwise, it writes the current character directly.

This linear scan has O(n) time complexity in the length of the format string.

### Variadic argument handling

`ft_printf` uses the C standard `stdarg.h` interface with `va_list`, `va_start`, `va_arg`, and `va_end`. The helper function `check_args` receives the current format specifier and the variadic argument list pointer, then extracts the next argument with the correct type. This ensures each format specifier is matched with the correct argument type and value.

### Output conversion

Numeric output uses a recursive base conversion helper, `ft_putnbr_base`, which converts an unsigned integer to the requested base and writes digits in the correct order. The recursion handles the most significant digits first, producing the output from left to right.

### Data structures

This implementation does not require complex data structures. It relies on:
- `va_list` for variadic argument traversal
- the format string itself as a stream of characters
- recursion for converting numbers to string representations

The design is intentionally lightweight, focusing on correctness and the constraints of the 42 project.

## Resources

- C standard library documentation: https://en.cppreference.com/w/c/io/fprintf
- `stdarg.h` reference: https://en.cppreference.com/w/c/variadic
- 42 project subject and guidelines
- `printf` implementation tutorials and articles about format string parsing

## AI Usage Disclosure

AI assistance was used to:
- identify and correct variadic argument handling errors
- resolve helper function signature