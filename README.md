[![en](https://img.shields.io/badge/lang-en-pink.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.md)
[![fr](https://img.shields.io/badge/lang-fr-purple.svg)](https://github.com/nfauconn/ft_printf/blob/master/README.fr.md)

# ft_printf

## 🏁 Goal 🏁

Recode `printf()`.

## 💡 Learning 💡

### 🌐 Language: C 🌐

- **Understanding of the `printf()` function:** Inner workings and versatility of the popular `printf()` function in C.

- **Data Structures in C:** Manage complex data more effectively, leading to more organized and scalable code.

- **Use of Variadic Functions:** Manage a function with a variable number of arguments using `va_start`, `va_arg`, `va_copy`, and `va_end`.

- **Handling Various Data Types and Conversions:** Managing different data types and conversions, such as printing characters, strings, pointers, and various number formats (decimal, integer, unsigned, hexadecimal).

### 🔧 Development Practices and Tools 🔧

- **Makefile Creation:** Compile source files, including a static custom library (libft), into the required static library

- **Code Structuring and Extensibility:** Writing well-structured and extensible code, which is crucial for the maintenance and scalability of software projects.

- **Code Optimization:** I decided to use a buffer to store all the output and perform a single write operation at the end, instead of making successive calls to `write()`. This reduced the overhead and improved the performance of my `ft_printf` function.

- **Memory Usage:** Buffering, concatenation, memory allocation, reallocation, and freeing memory. 

- **Function Pointers:** I used them in conjunction with an enumeration to call the appropriate conversion functions based on the format specifier. For example, `pf->fun_ptr[c] = &conv_c;` allowed me to map a character to a specific function, making the code modular and easy to extend.

## 📋 Subject 📋

### Common Instructions

- **Language:** Your project must be written in C.
- **Norm:** Your project must adhere to the Norm. Any norm error will result in a score of 0, including in the bonus files/functions.
- **Functionality:** Your functions should not exit unexpectedly (segmentation fault, bus error, double free, etc.), except for undefined behaviors.
- **Memory Management:** All heap-allocated memory space must be properly freed. Memory leaks will not be tolerated.
- **Makefile:** If required, submit a Makefile that compiles your source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`. It must not relink.
- **Submission:** Submit your work to your assigned git repository. Only the work in the git repository will be graded.

### Mandatory Part

- **Program Name:** `libftprintf.a`
- **Turn in Files:** `Makefile`, `*.h`, `*/.h`, `*.c`, `*/.c`
- **Makefile Rules:** `$(NAME)`, `all`, `clean`, `fclean`, `re`
- **External Functions:** `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Libft Authorized:** Yes
- **Description:** Recode the `printf()` function from libc. The prototype of `ft_printf()` is `int ft_printf(const char * ...);`. Your function must handle the following conversions: `cspdiuxX%`.

**Requirements:**

- Compare your function against the original `printf()`.
- Use the `ar` command to create your library. Using the `libtool` command is forbidden.
- Your `libftprintf.a` must be created at the root of your repository.

**Conversions to Implement:**

- `%c` Prints a single character.
- `%s` Prints a string (as defined by the common C convention).
- `%p` The `void *` pointer argument has to be printed in hexadecimal format.
- `%d` Prints a decimal (base 10) number.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a number in hexadecimal (base 16) lowercase format.
- `%X` Prints a number in hexadecimal (base 16) uppercase format.
- `%%` Prints a percent sign.

## Bonus Part

You are not required to complete all the bonuses. However, if you plan to attempt the bonus part, consider the implementation of your extra features from the start to avoid pitfalls.

**Bonus List:**

- Manage any combination of the following flags: `' -0.'` and the field minimum width under all conversions.
- Manage all the following flags: `'# +'` (Yes, one of them is a space).

**Note:** The bonus part will only be assessed if the mandatory part is PERFECT, meaning all mandatory requirements are fully met and function without any issues.

### Submission and Peer Evaluation

Turn in your assignment in your Git repository as usual. Ensure the names of your files are correct. After passing this assignment, you can add your `ft_printf()` to your `libft` for use in future C projects. Only the work inside your repository will be evaluated during the defense.