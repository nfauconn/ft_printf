[![en](https://img.shields.io/badge/lang-en-pink.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.md)
[![fr](https://img.shields.io/badge/lang-fr-purple.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.fr.md)

*C Programmin Language* • *Data Structures* • *Use of Variadic Functions* • *Data Types and Conversions* • *Code Structuring and Extensibility* • *Code Optimization* • *Memory Usage* • *Function Pointers* • *Parsing* • *Error Management* • *Makefile Usage* • *Basic Git Workflow*

# ft_printf

Custom implementation of `printf()`. I chose to use a buffer to store the output and print it only once at the end of the program. This allows to reduce the number of `write()` calls and thus to improve the performance of the program.

| Key | Value |
| -- | -- |
**Program Name** | A static library `libftprintf.a` to link with your main (if you don't have one, I've included a `main.c` to test the program)
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
