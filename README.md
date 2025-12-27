*This activity has been created as part of the 42 curriculum by klafi*

# Description
The goal of this project is re-implementing some of the libc functions, string manipulation functions, and linked list implementation with structs.
# Instructions
To create the library "libft.a", just type `make`. Then, you can use all the functions in the library by compiling your main.c file in a similar format : `cc -Wall -Wextra -Werror 'yourmain.cfile' libft.a -o run`.
# Resources
- 42-Curriculum PDFs.
- Peer collaboration.
- AI; mild usage in explaining some somewhat ambiguous concepts.
- Websites like GeekForGeeks and Youtube.
# Library Contents
1. Libc functions (you can use the man to know each function's functionality):
   - isalpha
   - isdigit
   - isalnum
   - isascii
   - isprint
   - strlen
   - memset
   - bzero
   - memcpy
   - memmove
   - strlcpy
   - strlcat
   - toupper
   - tolower
   - strchr
   - strrchr
   - strncmp
   - memchr
   - memcmp
   - strnstr
   - atoi
   - calloc
   - strdup
2. Additional functions:
   - ft_substr
     - returns a substring of the original string based upon the lenght of the substring and the index of start.
   - ft_strjoin
     - returns a string which is the result of mergin two strings
   - ft_strtrim
     - returns a string where all characters specified are omitted from begining and ending of the string.
   - ft_split
     - splits a string into a list of strings based on a specified `char` delimeter.
   - ft_itoa
     - converts a signed integer into a string.
   - ft_strmapi
     - returns a new string which is the result of applying each character in the original string to a specified function that returns a character.
   - ft_striteri
     - applies each character in the string to the passed function.
   - ft_putchar_fd
      - writes a `char` to a file via a File Descriptor.
   - ft_putstr_fd
     - writes a String to a file via a File Descriptor.
   - ft_putendl_fd
     - writes a String with an ending line break to a file via a File Descriptor.
   - ft_putnbr_fd
     - writes a number into a file via a File Desriptor.
3. Linked list:
   - ft_lstnew
     - returns a new Linked List node.
   - ft_lstadd_front
     - adds a new node to the front of the list such that the new node points to the first node of the original list.
   - ft_lstsize
     - returns the number of nodes in the Linked List.
   - ft_lstlast
     - returns the last node of the Linked List.
   - ft_lstadd_back
     - adds a new node to the back of a Linked List.
   - ft_lstdelone
     - deletes the content of a node and frees the pointer to a node.
   - ft_lstclear
     - deletes the content of all nodes of a Linked List and frees their pointers starting from a specific node.
   - ft_lstiter
     - applies each node in a Linked List to a specified function.
   - ft_lstmap
     - returns a pointer to a Linked List, such that each node in the new list is the result of passing a corresponding node in the original list to a specified function.
