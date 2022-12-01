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

<details>
<summary> Click here to see the functions </summary>
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
</details>

## Part 2 - Additional functions
In this second part you must develop a set of functions that are either not in the libc, or that are part of it but ina different form.

<details>
<summary> Click here to see the functions </summary>
**ft_substr**
Function name | ft_substr
| :--- | :---
Prototype | char *ft_substr(char const *s, unsigned int start, size_t len);
Turn in files | -
Parameters | s: The string from which to create the substring &nbsp; start: The start index of the substring in the string 's'. &nbsp; len: The maximum length of the substring.
Return value | The substring or NULL if the allocation fails.
External functs. | malloc
Description | Allocates (with malloc) and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.

**ft_strjoin**
Function name | ft_strjoin
| :--- | :---
Prototype | char *ft_strjoin(char const *s1, char const *s2);
Turn in files | -
Parameters | s1: The prefix string and s2: The suffix string
Return value | The new string or NULL if the allocation fails.
External functs. | malloc
Description | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

**ft_strtrim**
Function name | ft_strtrim
| :--- | :---
Prototype | char *ft_strtrim(char const *s1, char const *set);
Turn in files | -
Parameters | s1: The string to be trimmed and set: The reference set of characters to trim.
Return value | The trimmed string or NULL if the allocation fails.
External funcs. | malloc
Description | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

**ft_split**
Function name | ft_split
| :--- | :---
Prototype | char **ft_split(char const *s, char c);
Turn in files | -
Parameters | s: The string to be split and c: The delimiter character
Return value | The array of new strings resulting from the split or NULL if the allocation fails.
External funcs. | malloc, free
Description | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.

**ft_itoa**
Function name | ft_itoa
| :--- | :---
Prototype | char *ft_itoa(int n);
Turn in files | -
Parameters | n: the integer to convert.
Return value | The string representing the integer or NULL if the allocation fails.
External funcs. | malloc
Description | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

**ft_strmapi**
Function name | ft_strmapi
| :--- | :---
Prototype | char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Turn in files | -
Parameters | s: The string on which to iterate and f: The function to apply on each character.
Return value | The string created from the successive applications of 'f' or NULL if the allocation fails.
External funcs. | malloc
Description | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.

**ft_striteri**
Function name | ft_striteri
| :--- | :---
Prototype | void ft_striteri(char *s, void (*f)(unsigned int,
char*));
Turn in files | -
Parameters | s: The string on which to iterate and f: The function to apply on each character
Return value | None
External funcs. | None
Description | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.

**ft_putchar_fd**
Function name | ft_putchar_fd
| :--- | :---
Prototype | void ft_putchar_fd(char c, int fd);
Turn in files | -
Parameters | c: The character to output and fdL The file descriptor on which to write.
Return value | None
External funcs. | write
Description | Outputs the character ’c’ to the given file descriptor.

**ft_putstr_fd**
Function name | ft_putstr_fd
| :--- | :---
Prototype | void ft_putstr_fd(char *s, int fd);
Turn in files | -
Parameters | s: The string to output and fd: The file descriptor on which to write.
Return value | None
External funcs. | write
Description | Outputs the string ’s’ to the given file descriptor.

**ft_putendl_fd**
Function name | ft_putendl_fd
| :--- | :---
Prototype | void ft_putendl_fd(char *s, int fd);
Turn in files | -
Parameters | s: The string to output and fd: The file descriptor on which to write.
Return value | None
External funcs. | write
Description | Outputs the integer ’n’ to the given file descriptor.

**ft_putnbr_fd**
Function name | ft_putnbr_fd
| :--- | :---
Prototype | 
Turn in files | -
Parameters | s: The string to output and fd: The file descriptor on which to write.
Return value | None
External funcs. | write
Description | Outputs the integer ’n’ to the given file descriptor.
</details>

## Bonus part

If you completed the mandatory part, do not hesitate to go further by doing this extra one.

<details>
<summary> Click here to see the functions </summary>

Functions to manipulate memory and strings is very useful. But you will soon discover
that manipulating lists is even more useful.
You have to use the following structure to represent a node of your list. Add its
declaration to your libft.h file:
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```
The members of the t_list struct are:
• content: The data contained in the node.
void * allows to store any kind of data.
• next: The address of the next node, or NULL if the next node is the last one.
In your Makefile, add a make bonus rule to add the bonus functions to your libft.a


**ft_lstnew**
Function name | ft_lstnew
| :--- | :---
Prototype | t_list *ft_lstnew(void *content);
Turn in files | -
Parameters | content: The content to create the node with.
Return value | The new node
External funcs. | malloc
Description | Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

**ft_lstadd_front**
Function name | ft_lstadd_front
| :--- | :---
Prototype | void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files | -
Parameters | lst: The address of a pointer to the first link of a list and new: The address of a pointer to the node to be added to the list.
Return value | None
External funcs. | None
Description | Adds the node 'new' at the beginning of the list.

**ft_lstsize**
Function name | ft_lstsize
| :--- | :---
Prototype | int ft_lstsize(t_list *lst);
Turn in files | -
Parameters | lst: The beginning of the list.
Return value | The length of the list
External funcs. | None
Description | Counts the number of nodes in a list

**ft_lstlast**
Function name | ft_lstlast
| :--- | :---
Prototype | t_list *ft_lstlast(t_list *lst);
Turn in files | -
Parameters | lst: The beginning of the list.
Return value | Last node of the list
External funcs. | None
Description | Returns the last node of the list

**ft_lstadd_back**
Function name | ft_lstadd_back
| :--- | :---
Prototype | void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files | -
Parameters | lst: The address of a pointer to the first link of a list and new: The address of a pointer to the node to be added to the list.
Return value | None
External funcs. | None
Description | Adds the node 'new' at the end of the list.

**ft_lstdelone**
Function name | 
| :--- | :--- | :---
Prototype | void ft_lstdelone(t_list *lst, void (*del)(void
*));
Turn in files | -
Parameters | lst: The node to free and del: The address of the function used to delete the content.
Return value | None
External funcs. | free
Description | Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.

**ft_lstclear**
Function name | ft_lstclear
| :--- | :---
Prototype | void ft_lstclear(t_list **lst, void (*del)(void
*));
Turn in files | -
Parameters | lst: The address of a pointer to a node and del: The address of the function used to delete the content of the node.
Return value | None
External funcs. | free
Description | Deletes and frees the given node and every successor of that node, using the function ’del’and free. Finally, the pointer to the list must be set to NULL.

**ft_lstiter**
Function name | ft_lstiter
| :--- | :---
Prototype | void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files | -
Parameters | st: The address of a pointer to a node and f: The address of the function used to iterate on the list.
Return value | None
External funcs. | None
Description | Iterates the list ’lst’ and applies the function ’f’ on the content of each node.

**ft_lstmap**
Function name | ft_lstmap
| :--- | :---
Prototype | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
Turn in files | -
Parameters | lst: The address of a pointer to a node, f: The address of the function used to iterate on the list and del: The address of the function used to delete the content of a node if needed.
Return value | The new list or NULL if the allocation fails.
External funcs. | malloc, free
Description | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
</details>