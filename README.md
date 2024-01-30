[![en](https://img.shields.io/badge/lang-en-pink.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.md)
[![fr](https://img.shields.io/badge/lang-fr-purple.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.fr.md)

# ft_printf


Custom implementation of `printf()`.

## Usage

```shell
git clone git@github.com:nfauconn/ft_printf.git
cd ft_printf/Project
make
```

``` shell
> cc main.c libftprintf.a
> ./a.out
```

## Description

**Program Name** | `libftprintf.a`
| -- | -- |
**Language** | C
**Turn in Files** | `Makefile`, `*.h`, `*/.h`, `*.c`, `*/.c`
**Makefile Rules** | `$(NAME)`, `all`, `clean`, `fclean`, `re`
**External Functions** | `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

- The `ar` command creates the library. Using the `libtool` command was forbidden.

**Conversions Implemented:**

- `%c` Prints a single character.
- `%s` Prints a string (as defined by the common C convention).
- `%p` The `void *` pointer argument has to be printed in hexadecimal format.
- `%d` Prints a decimal (base 10) number.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a number in hexadecimal (base 16) lowercase format.
- `%X` Prints a number in hexadecimal (base 16) uppercase format.
- `%%` Prints a percent sign.

**Flags Implemented:**
- `<width>` Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.
- `.<precision>` Precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is larger.
- ` ` (space) A blank space is left before a positive number (or empty string) produced by a signed conversion.
- `+` A sign must always be placed before a number produced by a signed conversion.
- `#` Used with `o`, `x`, or `X` conversions, the value is preceded with `0`, `0x`, or `0X` respectively for values different than zero.
- `0` Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).
- `-` Left-justify within the given field width; Right justification is the default (see width sub-specifier).


## Skills

- **Understanding of the `printf()` function:** Inner workings and versatility of the popular `printf()` function in C.

- **Data Structures in C:** Manage complex data more effectively, leading to more organized and scalable code.

- **Use of Variadic Functions:** Manage a function with a variable number of arguments using `va_start`, `va_arg`, `va_copy`, and `va_end`.

- **Handling Various Data Types and Conversions:** Managing different data types and conversions, such as printing characters, strings, pointers, and various number formats (decimal, integer, unsigned, hexadecimal).

- **Makefile Creation:** Compile source files, into the required static library

- **Code Structuring and Extensibility:** Writing well-structured and extensible code, which is crucial for the maintenance and scalability of software projects.

- **Code Optimization:** I decided to use a buffer to store all the output and perform a single write operation at the end, instead of making successive calls to `write()`. This reduced the overhead and improved the performance of my `ft_printf` function.

- **Memory Usage:** Buffering, concatenation, memory allocation, reallocation, and freeing memory. 

- **Function Pointers:** I used them in conjunction with an enumeration to call the appropriate conversion functions based on the format specifier. For example, `pf->fun_ptr[c] = &conv_c;` allowed me to map a character to a specific function, making the code modular and easy to extend.
