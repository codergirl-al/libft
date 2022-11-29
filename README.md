# libft
first painful project at 42

## Project: Your very first own library

Program name | libft.a
| :--- | : ---
Turn in files | Makefile, libft.h ft_*.c
Makefile | NAME, all, clean, fclean, re
External functs. | Detailed below
Libft authorized | n/a
Description | Write your own library: a collection of functions that will be a useful tool for your cursus

## Technical Considerations

* Declaring global variables is forbidden.
* If you need helper functions to split a more complex function, define them as static
functions. This way, their scope will be limited to the appropriate file.
* Place all your files at the root of your repository.
* Turning in unused files is forbidden.
* Every **.c** file must compile with the flags **-Wall** **-Wextra** **-Werror**
* You must use the command **ar** to create your library. Using the libtool command is forbidden.
* Your **libft.a** has to be created at the root of your repository.

## Part 1 - Libc functions
Those functions are from the libc library. The goal is to have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their **man**. The only difference will be their names. They will begin with the '**ft_**' prefix. For instance, strlen becomes ft_strlen.

• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• ato
• calloc
• strdup

## Part 2 - Additional functions
In this second part you must develop a set of functions that are either not in the libc, or that are part of it but ina different form.

**ft_substr**
Function name | ft_substr
| :--- | :---
Prototype | char *ft_substr(char const *s, unsigned int start, size_t len);
Turn in files | -
Parameters | s: The string from which to create the substring \ start: The start index of the substring in the string 's'. \ len: The maximum length of the substring.